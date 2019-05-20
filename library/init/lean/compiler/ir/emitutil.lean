/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
prelude
import init.control.conditional
import init.lean.compiler.ir.compilerm

/- Helper functions for backend code generators -/

namespace Lean
namespace IR

namespace UsesLeanNamespace

abbrev M := ReaderT Environment (State NameSet)

def leanNameSpacePrefix := `Lean

partial def visitFnBody : FnBody → M Bool
| (FnBody.vdecl _ _ v b) :=
  let checkFn (f : FunId) : M Bool :=
     if leanNameSpacePrefix.isPrefixOf f then pure true
     else do {
       s ← get,
       if s.contains f then
         visitFnBody b
       else do
         modify (λ s, s.insert f),
         env ← read,
         match findEnvDecl env f with
         | some (Decl.fdecl _ _ _ fbody) := visitFnBody fbody <||> visitFnBody b
         | other                         := visitFnBody b
    } in
  match v with
  | Expr.fap f _ := checkFn f
  | Expr.pap f _ := checkFn f
  | other        := visitFnBody b
| (FnBody.jdecl _ _ v b) := visitFnBody v <||> visitFnBody b
| (FnBody.case _ _ alts) := alts.anyM $ λ alt, visitFnBody alt.body
| e :=
  if e.isTerminal then pure false
  else visitFnBody e.body

end UsesLeanNamespace

def usesLeanNamespace (env : Environment) : Decl → Bool
| (Decl.fdecl _ _ _ b) := (UsesLeanNamespace.visitFnBody b env).run' {}
| _                    := false


namespace CollectUsedDecls

abbrev M := State NameSet

@[inline] def collect (f : FunId) : M Unit :=
modify (λ s, s.insert f)

partial def collectFnBody : FnBody → M Unit
| (FnBody.vdecl _ _ v b) :=
  match v with
  | Expr.fap f _ := collect f *> collectFnBody b
  | Expr.pap f _ := collect f *> collectFnBody b
  | other        := collectFnBody b
| (FnBody.jdecl _ _ v b) := collectFnBody v *> collectFnBody b
| (FnBody.case _ _ alts) := alts.mfor $ λ alt, collectFnBody alt.body
| e := unless e.isTerminal $ collectFnBody e.body

end CollectUsedDecls

def collectUsedDecls (decl : Decl) (used : NameSet := {}) : NameSet :=
match decl with
| Decl.fdecl _ _ _ b := (CollectUsedDecls.collectFnBody b *> get).run' used
| other              := used

end IR
end Lean
