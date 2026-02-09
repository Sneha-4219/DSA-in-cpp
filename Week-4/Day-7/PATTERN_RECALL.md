## 🧠 DAY-7 · TOKEN-1 — ACTIVE RECALL (DETAILED)

### 🎯 Goal
Lock **Pattern A: Two Pointers (Strings)** and  
**Pattern B: Sliding Window (Strings)** so deeply that your brain auto-selects them in interviews.

No code.  
No browsing.  
Only thinking and speaking aloud.

---

## 🧠 PART 1️⃣ — PATTERN A  
### TWO POINTERS (STRINGS)

### 🧠 First Rule (Say This Aloud)
> **“Two pointers is about comparing or processing characters from both ends.”**

---

### 1️⃣ Trigger Recognition (MOST IMPORTANT)

Say these words slowly:

- palindrome  
- reverse string  
- compare from both ends  
- remove characters  
- skip characters  
- symmetry  

👉 If characters are compared **pairwise from opposite sides** → **Two Pointers**

**Examples you should recall instantly:**
- Valid Palindrome  
- Reverse String  
- Remove Palindromic Subsequences  

---

### 2️⃣ Core Invariant (THIS KEEPS IT CORRECT)

Say this **exact sentence**:

> **“All characters outside the left and right pointers are already processed correctly.”**

**Why this matters:**
- Once you move a pointer, you never go back  
- Anything you passed must already be correct  
- If this invariant breaks → logic breaks  

---

### 3️⃣ Pointer Meaning (MENTAL MODEL)

Say:

- `left` → processes characters from the start  
- `right` → processes characters from the end  

You only care about:

- s[left] vs s[right]

Nothing else.

---

### 4️⃣ Pointer Movement Rules (VERY STRICT)

Say this clearly:

- Compare first  
- If characters match → move both  
- If they don’t → answer is decided  
- Sometimes skip characters (spaces, symbols)  
- Never move pointers randomly  

**Examples:**
- Palindrome → move both inward  
- Remove spaces → move only one pointer  

---

### 5️⃣ Time & Space (Say Confidently)

- **Time:** `O(n)`  
  (each character checked once)

- **Space:** `O(1)`  
  (no extra memory)

---

### 🔒 Pattern A Lock-In (Say This)
> **“Two pointers works because I reduce the problem size from both ends while preserving correctness.”**

---

## 🧠 PART 2️⃣ — PATTERN B  
### SLIDING WINDOW (STRINGS)

### 🧠 First Rule (Say This Aloud)
> **“Sliding window is about processing contiguous substrings efficiently.”**

---

### 1️⃣ Trigger Recognition (AUTOMATIC)

Say these keywords:

- substring  
- contiguous  
- longest / shortest  
- frequency / count  
- at most / at least  
- no repeating  

👉 If the problem talks about a **continuous range + condition** → **Sliding Window**

---

### 2️⃣ Window Meaning (VERY BASIC)

Say:

- A window is a range `[left … right]`  
- It represents the current substring  
- Everything outside the window is irrelevant  

---

### 3️⃣ Pointer Meaning

Say:

- `right` → expands the window  
- `left` → shrinks the window  

Very important sentence:

> **Right always moves forward.  
Left moves only to fix violations.**

---

### 4️⃣ Expand Logic (WHEN & WHY)

Say:

> **“I always expand first to explore larger substrings.”**

Expand means:
- include `s[right]`  
- update frequency / count  

You never ask *“should I expand?”*  
You **always expand**.

---

### 5️⃣ Shrink Logic (WHEN & WHY)

Say:

> **“I shrink only when the window becomes invalid.”**

Invalid means:
- duplicate appears  
- count exceeds limit  
- constraint breaks  

Shrinking:
- removes `s[left]`  
- restores validity  

---

### 6️⃣ Core Invariant (THIS IS GOLD)

Say this **exactly**:

> **“At every step, the window is valid or almost-valid according to the problem constraint.”**

Explain to yourself:
- *Almost-valid* = only the newest character broke the rule  
- Shrinking fixes it  
- Window never stays invalid for long  

---

### 7️⃣ When to Update Answer (COMMON TRAP)

Say:

> **“I update the answer only after the window becomes valid.”**

Never before.  
Never during invalid state.

---

### 8️⃣ Time & Space (Say Like an Interviewer)

- **Time:** `O(n)`  
  (each character enters and leaves the window once)

- **Space:** `O(1)` or `O(k)`  
  (bounded frequency map)

---

### 🔒 Pattern B Lock-In (Say This)
> **“Sliding window avoids brute force by reusing previous work and maintaining a valid range.”**

---

## 🧠 FINAL COMPARISON (SAY THIS ALOUD)

### Two Pointers
- Opposite ends  
- Pairwise comparison  
- No frequency tracking  
- Simple invariant  

### Sliding Window
- Continuous range  
- Expand + shrink  
- Frequency / counts  
- Validity invariant  

> **If you can say this without looking, the patterns are locked.**
