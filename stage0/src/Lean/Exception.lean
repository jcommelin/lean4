/-
Copyright (c) 2020 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Message
import Lean.InternalExceptionId
import Lean.Data.Options
import Lean.Util.MonadCache

namespace Lean

/- Exception type used in most Lean monads -/
inductive Exception :=
  | error (ref : Syntax) (msg : MessageData)
  | internal (id : InternalExceptionId) (extra : KVMap := {})

def Exception.toMessageData : Exception → MessageData
  | Exception.error _ msg   => msg
  | Exception.internal id _ => id.toString

def Exception.getRef : Exception → Syntax
  | Exception.error ref _   => ref
  | Exception.internal _  _ => Syntax.missing

instance : Inhabited Exception := ⟨Exception.error arbitrary arbitrary⟩

/- Similar to `AddMessageContext`, but for error messages.
   The default instance just uses `AddMessageContext`.
   In error messages, we may want to provide additional information (e.g., macro expansion stack),
   and refine the `(ref : Syntax)`. -/
class AddErrorMessageContext (m : Type → Type) :=
  (add : Syntax → MessageData → m (Syntax × MessageData))

instance (m : Type → Type) [AddMessageContext m] [Monad m] : AddErrorMessageContext m := {
  add := fun ref msg => do
    let msg ← addMessageContext msg
    pure (ref, msg)
}

section Methods

variables {m : Type → Type} [Monad m] [MonadExceptOf Exception m] [MonadRef m] [AddErrorMessageContext m]

def throwError (msg : MessageData) : m α := do
  let ref ← getRef
  let (ref, msg) ← AddErrorMessageContext.add ref msg
  throw $ Exception.error ref msg

def throwUnknownConstant (constName : Name) : m α :=
  throwError m!"unknown constant '{mkConst constName}'"

def throwErrorAt (ref : Syntax) (msg : MessageData) : m α := do
  withRef ref <| throwError msg

def ofExcept [ToString ε] (x : Except ε α) : m α :=
  match x with
  | Except.ok a    => pure a
  | Except.error e => throwError $ toString e

def throwKernelException [MonadOptions m] (ex : KernelException) : m α := do
  throwError <| ex.toMessageData (← getOptions)

end Methods

class MonadRecDepth (m : Type → Type) :=
  (withRecDepth {α} : Nat → m α → m α)
  (getRecDepth      : m Nat)
  (getMaxRecDepth   : m Nat)

instance [Monad m] [MonadRecDepth m] : MonadRecDepth (ReaderT ρ m) := {
  withRecDepth   := fun d x ctx => MonadRecDepth.withRecDepth d (x ctx),
  getRecDepth    := fun _ => MonadRecDepth.getRecDepth,
  getMaxRecDepth := fun _ => MonadRecDepth.getMaxRecDepth
}

instance [Monad m] [MonadRecDepth m] : MonadRecDepth (StateRefT' ω σ m) :=
  inferInstanceAs (MonadRecDepth (ReaderT _ _))

instance [BEq α] [Hashable α] [Monad m] [STWorld ω m] [MonadRecDepth m] : MonadRecDepth (MonadCacheT α β m) :=
  inferInstanceAs (MonadRecDepth (StateRefT' _ _ _))

@[inline] def withIncRecDepth [Monad m] [MonadRecDepth m] [MonadExceptOf Exception m] [MonadRef m] [AddErrorMessageContext m]
    (x : m α) : m α := do
  let curr ← MonadRecDepth.getRecDepth
  let max  ← MonadRecDepth.getMaxRecDepth
  if curr == max then throwError maxRecDepthErrorMessage
  MonadRecDepth.withRecDepth (curr+1) x

syntax "throwError! " (interpolatedStr(term) <|> term) : term
syntax "throwErrorAt! " term:max (interpolatedStr(term) <|> term) : term

macro_rules
  | `(throwError! $msg) =>
    if msg.getKind == interpolatedStrKind then
      `(throwError (m! $msg))
    else
      `(throwError $msg)

macro_rules
  | `(throwErrorAt! $ref $msg) =>
    if msg.getKind == interpolatedStrKind then
      `(throwErrorAt $ref (m! $msg))
    else
      `(throwErrorAt $ref $msg)

end Lean
