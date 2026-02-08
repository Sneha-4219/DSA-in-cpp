# Week 4 – Day 1: Two Pointers on Strings (Foundation)

## 🎯 Goal
Build a **deep, first-principles understanding** of the **Two Pointers pattern on strings**, so that palindrome and symmetry problems feel *obvious*, not memorized.

The focus is **how to think**, not just how to code.

After this day, you should be able to:
- Recognize two-pointer problems instantly
- Explain *why* pointer movement is correct
- Handle edge cases confidently in interviews

---

## 📘 Topics Covered
- Two pointers pattern on strings
- Pointer setup and movement rules
- Character filtering and normalization
- Core invariant reasoning
- Palindrome and symmetry logic
- Applying two-pointer thinking to arrays (revision)

---

## 🧠 Two Pointers Thinking from First Principles

Many string problems are about **symmetry**.

Think of a word written on paper.  
To check if it reads the same forwards and backwards, you don’t re-read the entire word again and again.

Instead:
- You compare the **first and last character**
- Then move inward
- Then repeat

This is the natural human strategy — and that’s exactly what **two pointers** model.

### Real-life analogy  
Imagine checking whether a line of people is symmetric:
- Compare the first and last person
- If they match, ignore them forever
- Move inward

Once checked, **you never look back**.

That idea — *never revisiting processed data* — is the heart of this pattern.

---

## 🔍 What the Problems Are Really Asking

### LC 125 — Valid Palindrome  
**Real question:**  
> Can you compare characters from both ends while **ignoring irrelevant characters** and still guarantee correctness?

This tests:
- Skipping logic
- Case normalization
- Invariant thinking

---

### LC 680 — Valid Palindrome II  
**Real question:**  
> If symmetry breaks once, can you recover by making **one intelligent decision**?

This tests:
- Controlled branching
- Understanding *where* deletion matters
- Proof-based reasoning (not guesswork)

---

### LC 121 — Best Time to Buy and Sell Stock (Revision)  
**Real question:**  
> Can you stop comparing every pair and instead track the **best past decision**?

This reinforces:
- Directional scanning
- Eliminating unnecessary comparisons
- Two-pointer thinking on arrays

---

## ❌ Naive Approach (Why It Fails)

Common beginner mistakes:
- Using nested loops to compare characters → **O(n²)**
- Rechecking characters that were already validated
- Ignoring how skipping characters affects correctness
- Trying all possible deletions in LC 680

These approaches are slow and hard to reason about.

More importantly, **they lack a proof of correctness**.

---

## ✅ Optimized Thinking (The Core Idea)

### Step 1: Pointer Setup
- Place one pointer at the start
- One pointer at the end

### Step 2: Maintain an Invariant  
> **At any point, all characters outside the left and right pointers are already validated and will never be revisited.**

This invariant guarantees:
- No repeated work
- No missed comparisons
- Linear time complexity

### Step 3: Move with Rules
- Skip irrelevant characters (symbols, spaces)
- Normalize data before comparing (uppercase vs lowercase)
- Move inward only when safe

Because the invariant holds, **moving inward is always correct**.

---

## ⏱️ Time & Space Complexity (Explained Simply)

| Problem | Time Complexity | Why | Space Complexity |
|------|----------------|-----|------------------|
| LC 125 | O(n) | Each character is visited once | O(1) |
| LC 680 | O(n) | One extra check at first mismatch | O(1) |
| LC 121 | O(n) | Single pass scan | O(1) |

No extra memory. No repeated work.

---

## 📂 Files in This Folder

| File Name | Description |
|---------|-------------|
| `lc_125_valid_palindrome.cpp` | Two pointers with skipping and normalization |
| `lc_680_valid_palindrome_ii.cpp` | One-deletion logic with controlled branching |
| `lc_121_best_time_buy_sell_stock.cpp` | Directional scanning on arrays |

---

## 🧠 Key Learnings
- Two pointers are about **proof**, not speed
- Skipping characters does not break correctness
- Invariants are more important than conditions
- Most “different” problems reuse the same thinking pattern
- Good solutions move **forward only**

---

## 🚀 Status
✅ Day-1 completed successfully  
📌 Strong focus on reasoning, invariants, and edge cases

---

## 🔜 Next
Day-2: Two Pointers with Conditional Decisions & Advanced Variations
