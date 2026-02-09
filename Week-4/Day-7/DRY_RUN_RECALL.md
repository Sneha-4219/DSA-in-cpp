## 🧠 DAY-7 · TOKEN-1  
## PART-2 — DRY-RUN RECALL (DETAILED)

No code.  
Only **thinking**, **speaking**, and **explaining every move**.

The goal is to prove that patterns are **internalized**, not memorized.

---

## 🔹 DRY RUN 1 — PALINDROME (TWO POINTERS)

### Problem in Mind
**Valid Palindrome**

String:
"A man, a plan, a canal: Panama"

---

### 🔔 Step 0 — Say the Trigger (Aloud)

Say clearly:

> **“Palindrome → symmetry → compare from both ends → Two Pointers”**

---

### 🧠 Pointer Setup

Say:
- `left` at the start
- `right` at the end

Invariant (say this aloud):

> **“Everything outside left and right is already checked.”**

---

### 🔁 Dry Run (SAY EVERY MOVE)

#### Step 1
- `left` → `'A'`
- `right` → `'a'`

Convert both to lowercase  
They match ✅

👉 Move **both** pointers inward

---

#### Step 2
- `left` → `' '` (space)

Not alphanumeric ❌  
👉 Skip it  
👉 Move **left only**

Explain aloud:

> **“Skipping characters does not break the invariant.”**

---

#### Step 3
- `right` → `' '` or `':'`

Not alphanumeric ❌  
👉 Skip it  
👉 Move **right only**

---

#### Step 4
- `left` → `'m'`
- `right` → `'m'`

Match ✅  
👉 Move **both**

---

Continue this same pattern.

Each time, **say aloud**:
- what `left` sees
- what `right` sees
- why you move one or both pointers

---

### 🛑 Stop Condition

Say clearly:

> **“When left ≥ right, all pairs have matched → palindrome is true.”**

---

### 🔒 Lock-In (Say This)

> **“Two pointers works because I shrink the problem from both ends while preserving correctness.”**

---

## 🔹 DRY RUN 2 — SLIDING WINDOW (VARIABLE)

### Problem in Mind
**LC 3 — Longest Substring Without Repeating Characters**

String:
"abcabcbb"

---

### 🔔 Step 0 — Say the Trigger (Aloud)

Say:

> **“Substring + longest + no repeating → Sliding Window (variable)”**

---

### 🧠 Window Setup

Say:
- `left = 0`
- `right = 0`
- window is empty
- frequency map/set is empty

Invariant (say this):

> **“Window is always valid or almost-valid.”**

---

### 🔁 Dry Run (SAY EVERY MOVE)

#### Step 1 — `right = 0` (`'a'`)
- Expand window
- `'a'` not present → valid

Window = `"a"`  
👉 Update answer = `1`

---

#### Step 2 — `right = 1` (`'b'`)
- Expand
- `'b'` not present → valid

Window = `"ab"`  
👉 Update answer = `2`

---

#### Step 3 — `right = 2` (`'c'`)
- Expand
- `'c'` not present → valid

Window = `"abc"`  
👉 Update answer = `3`

---

#### Step 4 — `right = 3` (`'a'`)
- Expand
- `'a'` already present ❌  
Window becomes invalid

Say aloud:

> **“Only the newest character broke the rule → almost-valid.”**

---

### 🔁 Shrinking Phase (IMPORTANT)

- Remove `s[left] = 'a'`
- Move `left`

Now:
- Duplicate resolved
- Window = `"bca"` → valid again

👉 Update answer (still `3`)

---

#### Step 5 — `right = 4` (`'b'`)
- Expand
- `'b'` duplicate ❌

Shrink:
- remove `'b'`
- move `left`

Window = `"cab"` → valid

---

#### Step 6 — `right = 5` (`'c'`)
- Duplicate ❌
- Shrink

Window = `"abc"` → valid

---

#### Step 7 — `right = 6` (`'b'`)
- Duplicate ❌
- Shrink twice

Window = `"cb"` → valid

---

#### Step 8 — `right = 7` (`'b'`)
- Duplicate ❌
- Shrink

Window = `"b"` → valid

---

### 🛑 End Condition

Say:

> **“Right reached the end.  
Maximum answer recorded = 3.”**

---

### 🔒 Lock-In (Say This)

> **“Sliding window works because I never restart.  
I only expand and shrink while maintaining validity.”**
