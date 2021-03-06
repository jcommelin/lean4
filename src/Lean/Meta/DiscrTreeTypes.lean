/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Expr

namespace Lean.Meta

/- See file `DiscrTree.lean` for the actual implementation and documentation. -/

namespace DiscrTree

inductive Key :=
  | const : Name → Nat → Key
  | fvar  : FVarId → Nat → Key
  | lit   : Literal → Key
  | star  : Key
  | other : Key

instance : Inhabited Key := ⟨Key.star⟩

protected def Key.hash : Key → USize
  | Key.const n a => mixHash 5237 $ mixHash (hash n) (hash a)
  | Key.fvar n a  => mixHash 3541 $ mixHash (hash n) (hash a)
  | Key.lit v     => mixHash 1879 $ hash v
  | Key.star      => 7883
  | Key.other     => 2411

instance : Hashable Key := ⟨Key.hash⟩

protected def Key.beq : Key → Key → Bool
  | Key.const c₁ a₁, Key.const c₂ a₂ => c₁ == c₂ && a₁ == a₂
  | Key.fvar c₁ a₁,  Key.fvar c₂ a₂  => c₁ == c₂ && a₁ == a₂
  | Key.lit v₁,      Key.lit v₂      => v₁ == v₂
  | Key.star,        Key.star        => true
  | Key.other,       Key.other       => true
  | _,                _              => false

instance : BEq Key := ⟨Key.beq⟩

inductive Trie (α : Type) :=
  | node (vs : Array α) (children : Array (Key × Trie α)) : Trie α

end DiscrTree

open DiscrTree
open Std (PersistentHashMap)

structure DiscrTree (α : Type) :=
  (root : PersistentHashMap Key (Trie α) := {})

end Lean.Meta
