## 🎤 DAY-7 · TOKEN-2 — INTERVIEW SIMULATION  
*(MOST IMPORTANT FOR CONFIDENCE)*

This section simulates **real interview questioning**.  
Answer everything **out loud or in writing**, without looking at code.

The goal is not correctness of syntax —  
the goal is **confidence, clarity, and proof of understanding**.

---

## Q1️⃣ “Why not brute force?”

### 🧠 What YOU should say (out loud)

> **“Brute force tries all possible substrings.  
Many substrings overlap, so the same characters are processed again and again.  
This leads to O(n²) or even O(n³) time.  
Sliding window avoids this repetition by reusing previous work.”**

---

### 🔍 What the Interviewer Is Checking
- Do you understand **overlapping work**
- Do you know **why** brute force is slow — not just that it is slow

---

## Q2️⃣ “What breaks if pointers move incorrectly?”

### 🧠 Say This Clearly

> **“The invariant breaks.  
If pointers move randomly or out of order,  
the window may contain invalid substrings,  
duplicates may stay inside,  
or valid substrings may be skipped.”**

---

### Concrete Examples You Can Mention
- Moving `left` too early → losing valid answers  
- Updating answer while window is invalid → wrong result  
- Moving `right` backward → O(n²) behavior  

These examples show **debugging maturity**.

---

## Q3️⃣ “What invariant maintains correctness?”

### 🧠 For Two Pointers (Say This)

> **“All characters outside the left and right pointers are already processed and correct.”**

---

### 🧠 For Sliding Window (Say This EXACTLY)

> **“At every step, the window is valid or almost-valid according to the problem constraint.”**

Then explain:

- *Almost-valid* means only the newest character broke the rule  
- Shrinking restores validity  
- The window never stays invalid  

📌 **This sentence alone signals deep understanding.**

---

## Q4️⃣ “What is the worst-case complexity?”

### 🧠 Answer Confidently

**Two Pointers (Strings):**
- Time → `O(n)`
- Space → `O(1)`

**Sliding Window (Strings):**
- Time → `O(n)`
- Space → `O(1)` or `O(k)` (frequency map)

---

### If the interviewer asks:
> *“Why O(n) even with a while loop?”*

Say:

> **“Because each pointer moves forward at most n times.  
No character is processed more than twice.”**

This shows you understand **amortized analysis**.

---

## Q5️⃣ “How would you explain this approach to an interviewer?”

### 🧠 Model Answer  
*(Memorize the structure, not the words)*

> **“I use a sliding window to represent a contiguous substring.  
I expand the window to explore larger candidates.  
If the problem constraint breaks, I shrink the window from the left until validity is restored.  
Throughout the process, I maintain an invariant that guarantees correctness,  
which allows me to solve the problem in linear time.”**

---

### This Explanation Works For:
- LC 3  
- LC 1456  
- LC 424  
- LC 438  
- Many unseen problems  

---

## 🧠 FINAL RAPID-FIRE (Answer in One Line Each)

You should be able to say these **instantly**:

- **Why sliding window?**  
  → Because substrings are contiguous and overlap.

- **Why not restart the window?**  
  → Because previous work can be reused safely.

- **What controls window size?**  
  → The problem constraint.

- **When do you shrink?**  
  → Only when the window becomes invalid.

- **When do you update the answer?**  
  → Only when the window is valid.

---

## 🔒 FINAL DAY-7 LOCK (SAY THIS ALOUD)

> **“If I know the trigger, the invariant, and pointer rules,  
I don’t need to memorize solutions.  
I can derive them.”**

---

## ✅ DAY-7 STATUS

✔ Token-1: Active Recall — DONE  
✔ Token-2: Interview Simulation — DONE  

🔥 **STRING PATTERNS ARE NOW MUSCLE MEMORY** 🔥  

👑 Pattern A — Two Pointers (Strings): **LOCKED**  
👑 Pattern B — Sliding Window (Strings): **LOCKED**
