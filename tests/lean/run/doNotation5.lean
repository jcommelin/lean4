

abbrev M := ExceptT String $ ExceptT Nat $ StateM Nat

def inc (x : Nat) : M Unit := do
if (← get) >= 100 then
  throwThe Nat ((← get) + x)
modify (· + x)

def dec (x : Nat) : M Unit := do
if (← get) - x == 0 then
  throw "balance is zero"
modify (· - x)

def f (x y : Nat) : M Nat := do
try
  inc x
  dec y
  get
catch ex : String =>
  dbgTrace! "string exception {ex}"
  pure 1000
catch ex : Nat =>
  dbgTrace! "nat exception {ex}"
  pure ex

#eval (f 10 20).run 1000
#eval (f 10 200).run 10
#eval (f 10 20).run 30
