new_frontend

inductive InfTree.{u} (α : Type u)
| leaf : α → InfTree α
| node : (Nat → InfTree α) → InfTree α

open InfTree

def szn.{u} {α : Type u} (n : Nat) : InfTree α → InfTree α → Nat
| leaf a, t2     => 1
| node c, leaf b => 0
| node c, node d => szn n (c n) (d n)

universes u

theorem ex1 {α : Type u} (n : Nat) (c : Nat → InfTree α) (d : Nat → InfTree α) : szn n (node c) (node d) = szn n (c n) (d n) :=
rfl

inductive BTree (α : Type u)
| leaf : α → BTree α
| node : (Bool → Bool → BTree α) → BTree α

def BTree.sz {α : Type u} : BTree α → Nat
| leaf a => 1
| node c => sz (c true true) + sz (c true false) + sz (c false true) + sz (c false false) + 1

theorem ex2 {α : Type u} (c : Bool → Bool → BTree α) : (BTree.node c).sz = (c true true).sz + (c true false).sz + (c false true).sz + (c false false).sz + 1 :=
rfl