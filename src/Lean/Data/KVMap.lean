/-
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Data.Name

namespace Lean

inductive DataValue :=
  | ofString (v : String)
  | ofBool   (v : Bool)
  | ofName   (v : Name)
  | ofNat    (v : Nat)
  | ofInt    (v : Int)

@[export lean_mk_bool_data_value] def mkBoolDataValueEx (b : Bool) : DataValue := DataValue.ofBool b
@[export lean_data_value_bool] def DataValue.getBoolEx : DataValue → Bool
  | DataValue.ofBool b => b
  | _                  => false

def DataValue.beq : DataValue → DataValue → Bool
  | DataValue.ofString s₁, DataValue.ofString s₂ => s₁ = s₂
  | DataValue.ofNat n₁,    DataValue.ofNat n₂    => n₂ = n₂
  | DataValue.ofBool b₁,   DataValue.ofBool b₂   => b₁ = b₂
  | _,                       _                   => false

def DataValue.sameCtor : DataValue → DataValue → Bool
  | DataValue.ofString _, DataValue.ofString _ => true
  | DataValue.ofBool _,   DataValue.ofBool _   => true
  | DataValue.ofName _,   DataValue.ofName _   => true
  | DataValue.ofNat _,    DataValue.ofNat _    => true
  | DataValue.ofInt _,    DataValue.ofInt _    => true
  | _,                    _                    => false

instance : BEq DataValue := ⟨DataValue.beq⟩

@[export lean_data_value_to_string]
def DataValue.str : DataValue → String
  | DataValue.ofString v => v
  | DataValue.ofBool v   => toString v
  | DataValue.ofName v   => toString v
  | DataValue.ofNat v    => toString v
  | DataValue.ofInt v    => toString v

instance : ToString DataValue := ⟨DataValue.str⟩

instance : Coe String DataValue := ⟨DataValue.ofString⟩
instance : Coe Bool DataValue   := ⟨DataValue.ofBool⟩
instance : Coe Name DataValue   := ⟨DataValue.ofName⟩
instance : Coe Nat DataValue    := ⟨DataValue.ofNat⟩
instance : Coe Int DataValue    := ⟨DataValue.ofInt⟩

/- Remark: we do not use RBMap here because we need to manipulate KVMap objects in
   C++ and RBMap is implemented in Lean. So, we use just a List until we can
   generate C++ code from Lean code. -/
structure KVMap :=
  (entries : List (Name × DataValue) := [])

namespace KVMap
instance : Inhabited KVMap := ⟨{}⟩
instance : ToString KVMap := ⟨fun m => toString m.entries⟩

def empty : KVMap :=
  {}

def isEmpty : KVMap → Bool
  | ⟨m⟩ => m.isEmpty

def size (m : KVMap) : Nat :=
  m.entries.length

def findCore : List (Name × DataValue) → Name → Option DataValue
  | [],       k' => none
  | (k,v)::m, k' => if k == k' then some v else findCore m k'

def find : KVMap → Name → Option DataValue
  | ⟨m⟩, k => findCore m k

def findD (m : KVMap) (k : Name) (d₀ : DataValue) : DataValue :=
  (m.find k).getD d₀

def insertCore : List (Name × DataValue) → Name → DataValue → List (Name × DataValue)
  | [],       k', v' => [(k',v')]
  | (k,v)::m, k', v' => if k == k' then (k, v') :: m else (k, v) :: insertCore m k' v'

def insert : KVMap → Name → DataValue → KVMap
  | ⟨m⟩, k, v => ⟨insertCore m k v⟩

def contains (m : KVMap) (n : Name) : Bool :=
  (m.find n).isSome

def getString (m : KVMap) (k : Name) (defVal := "") : String :=
  match m.find k with
  | some (DataValue.ofString v) => v
  | _                           => defVal

def getNat (m : KVMap) (k : Name) (defVal := 0) : Nat :=
  match m.find k with
  | some (DataValue.ofNat v) => v
  | _                        => defVal

def getInt (m : KVMap) (k : Name) (defVal : Int := 0) : Int :=
  match m.find k with
  | some (DataValue.ofInt v) => v
  | _                        => defVal

def getBool (m : KVMap) (k : Name) (defVal := false) : Bool :=
  match m.find k with
  | some (DataValue.ofBool v) => v
  | _                         => defVal

def getName (m : KVMap) (k : Name) (defVal := Name.anonymous) : Name :=
  match m.find k with
  | some (DataValue.ofName v) => v
  | _                         => defVal

def setString (m : KVMap) (k : Name) (v : String) : KVMap :=
  m.insert k (DataValue.ofString v)

def setNat (m : KVMap) (k : Name) (v : Nat) : KVMap :=
  m.insert k (DataValue.ofNat v)

def setInt (m : KVMap) (k : Name) (v : Int) : KVMap :=
  m.insert k (DataValue.ofInt v)

def setBool (m : KVMap) (k : Name) (v : Bool) : KVMap :=
  m.insert k (DataValue.ofBool v)

def setName (m : KVMap) (k : Name) (v : Name) : KVMap :=
  m.insert k (DataValue.ofName v)

@[inline] def forIn.{w, w'} {δ : Type w} {m : Type w → Type w'} [Monad m]
  (kv : KVMap) (init : δ) (f : Name × DataValue → δ → m (ForInStep δ)) : m δ :=
  kv.entries.forIn init f

def subsetAux : List (Name × DataValue) → KVMap → Bool
  | [],          m₂ => true
  | (k, v₁)::m₁, m₂ =>
    match m₂.find k with
    | some v₂ => v₁ == v₂ && subsetAux m₁ m₂
    | none    => false

def subset : KVMap → KVMap → Bool
  | ⟨m₁⟩, m₂ => subsetAux m₁ m₂

def eqv (m₁ m₂ : KVMap) : Bool :=
  subset m₁ m₂ && subset m₂ m₁

instance : BEq KVMap := ⟨eqv⟩

class KVMapVal (α : Type) :=
  (defVal : α)
  (set    : KVMap → Name → α → KVMap)
  (get    : KVMap → Name → α → α)

export KVMapVal (set)

@[inline] def get {α : Type} [s : KVMapVal α] (m : KVMap) (k : Name) (defVal := s.defVal) : α :=
  KVMapVal.get m k defVal

@[inline] def set {α : Type} [s : KVMapVal α] (m : KVMap) (k : Name) (v : α) : KVMap :=
  KVMapVal.set m k v

instance : KVMapVal Bool := {
  defVal := false,
  set := setBool,
  get := fun k n v => getBool k n v
}

instance : KVMapVal Nat := {
  defVal := 0,
  set := setNat,
  get := fun k n v => getNat k n v
}

instance : KVMapVal Int := {
  defVal := 0,
  set := setInt,
  get := fun k n v => getInt k n v
}

instance : KVMapVal Name := {
  defVal := Name.anonymous,
  set := setName,
  get := fun k n v => getName k n v
}

instance : KVMapVal String := {
  defVal := "",
  set := setString,
  get := fun k n v => getString k n v
}

end Lean.KVMap
