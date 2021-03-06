/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Elab.Match
import Lean.Elab.Tactic.Basic
import Lean.Elab.Tactic.Induction

namespace Lean.Elab.Tactic

structure AuxMatchTermState :=
  (nextIdx : Nat := 1)
  (cases   : Array Syntax := #[])

private def mkAuxiliaryMatchTermAux (parentTag : Name) (matchTac : Syntax) : StateT AuxMatchTermState MacroM Syntax := do
  let matchAlts := matchTac[4]
  let alts      := matchAlts[1].getArgs
  let newAlts ← alts.mapSepElemsM fun alt => do
    let alt    := alt.setKind `Lean.Parser.Term.matchAlt
    let holeOrTacticSeq := alt[2]
    if holeOrTacticSeq.isOfKind `Lean.Parser.Term.syntheticHole then
      pure alt
    else if holeOrTacticSeq.isOfKind `Lean.Parser.Term.hole then
      let s ← get
      let tag := if alts.size > 1 then parentTag ++ (`match).appendIndexAfter s.nextIdx else parentTag
      let holeName := mkIdentFrom holeOrTacticSeq tag
      let newHole ← `(?$holeName:ident)
      modify fun s => { s with nextIdx := s.nextIdx + 1}
      pure $ alt.setArg 2 newHole
    else withFreshMacroScope do
      let newHole ← `(?rhs)
      let newHoleId := newHole[1]
      let newCase ← `(tactic| case $newHoleId => $holeOrTacticSeq:tacticSeq )
      modify fun s => { s with cases := s.cases.push newCase }
      pure $ alt.setArg 2 newHole
  let result  := matchTac.setKind `Lean.Parser.Term.«match»
  let result  := result.setArg 4 (matchAlts.setArg 1 (mkNullNode newAlts))
  pure result

private def mkAuxiliaryMatchTerm (parentTag : Name) (matchTac : Syntax) : MacroM (Syntax × Array Syntax) := do
  let (matchTerm, s) ← mkAuxiliaryMatchTermAux parentTag matchTac |>.run {}
  pure (matchTerm, s.cases)

@[builtinTactic Lean.Parser.Tactic.match] def evalMatch : Tactic := fun stx => do
  let tag ← getMainTag
  let (matchTerm, cases) ← liftMacroM $ mkAuxiliaryMatchTerm tag stx
  let refineMatchTerm ← `(tactic| refine $matchTerm)
  let stxNew := mkNullNode (#[refineMatchTerm] ++ cases)
  withMacroExpansion stx stxNew $ evalTactic stxNew

end Lean.Elab.Tactic
