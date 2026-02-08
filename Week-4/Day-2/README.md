# Week 4 – Day 2: Two Pointers on Strings (Recall + Depth)

## 🎯 Goal
Reinforce the **Two Pointers on Strings** pattern through **active recall and deeper reasoning**, so the approach becomes automatic under interview pressure.

This day is about:
- Reconstructing the pattern **from memory**
- Understanding *why* decisions are made
- Avoiding subtle logical traps

After this day, you should be able to:
- Derive the solution without looking at code
- Explain mismatch handling confidently
- Justify time and space complexity clearly

---

## 📘 Topics Covered
- Two pointers pattern recall
- Universal thinking framework
- Mismatch handling logic
- Common mistakes and traps
- Time and space analysis from first principles
- Applying the same pattern to new problems

---

## 🧠 Two Pointers Recall from First Principles

Two pointers is not about syntax — it’s about **directional reasoning**.

You are shrinking a problem from both ends while preserving a guarantee:
> Everything already processed is correct and never needs to be revisited.

This is why the pattern is powerful:
- It eliminates redundant work
- It provides a clear stopping condition
- It naturally leads to linear solutions

If you ever feel confused, it means the **invariant is unclear**, not the code.

---

## 🧩 Pattern Summary (From Memory)

- **Pattern name:** Two Pointers (Strings)
- **One-line description:**  
  Compare or process characters from both ends while shrinking the search space.
- **Where it is used:**  
  - Palindromes
  - Symmetry checks
  - Reversals
  - Selective swapping
  - Ignoring irrelevant characters

If a problem talks about “both ends”, this pattern should trigger immediately.

---

## 🧠 Universal 5-Step Thinking Template

Before writing any code, answer these five questions:

1. **What do `left` and `right` represent?**  
   → Indices pointing to the current characters being processed.

2. **What is a valid character?**  
   → Depends on the problem (letter, alphanumeric, etc.).

3. **What is the comparison logic?**  
   → Case-sensitive or case-insensitive? Direct match or transformed?

4. **How do pointers move?**  
   → Skip invalid characters, move inward after successful work.

5. **When do we stop?**  
   → When `left >= right`, the problem is solved.

If you can’t answer these clearly, don’t code yet.

---

## 🔍 Mismatch Handling Logic (Critical)

When characters don’t match, you must ask:

- Is a mismatch allowed?
- If yes, **how many times**?
- What are the **only valid decisions**?

Example insight:
- In palindrome problems with one deletion allowed,  
  only **one branching decision** is possible.
- More than one split leads to exponential logic — which is incorrect here.

Correct mismatch handling is about **controlled decisions**, not trial and error.

---

## ❌ Common Traps (Must Be Avoided)

These mistakes frequently appear in interviews:

- Comparing characters **before skipping invalid ones**
- Forgetting case normalization
- Moving both pointers incorrectly after a mismatch
- Assuming time is O(n²) when it is actually O(n)
- Breaking the invariant by moving pointers backward
- Using extra arrays or stacks unnecessarily

If any of these appear, the logic is flawed — even if the code “works”.

---

## ⏱️ Time & Space Analysis (Explained in Words)

### Why Time is O(n)
- Each pointer moves only forward
- No character is revisited
- Even with one mismatch branch, total work is linear

### Why Space is O(1)
- No extra data structures are required
- Helper functions reuse the same string
- Recursion is unnecessary for this pattern

If your solution uses extra space, ask *why*.

---

## 🔍 What the Problems Are Really Asking

### LC 125 — Valid Palindrome (Repeat)
> Can you consistently apply skipping, normalization, and comparison without breaking the invariant?

---

### LC 917 — Reverse Only Letters  
> Can you selectively move characters while leaving others untouched?

This tests:
- Pointer control
- Conditional swapping
- Precision in movement rules

---

### LC 2108 — First Palindromic String in an Array  
> Can you apply a known pattern repeatedly without rewriting logic?

This tests:
- Reusability of thinking
- Clean separation of checking vs scanning

---

## 📂 Files in This Folder

| File Name | Description |
|---------|-------------|
| `lc_125_valid_palindrome.cpp` | Recall implementation with clean invariant |
| `lc_917_reverse_only_letters.cpp` | Selective two-pointer swapping |
| `lc_2108_first_palindromic_string.cpp` | Applying palindrome check across array |

---

## 🧠 Key Learnings
- Patterns should be **reconstructed**, not memorized
- Most bugs come from breaking invariants
- Mismatch handling must be intentional
- Two pointers reward clarity over cleverness
- If reasoning is clean, code becomes simple

---

## 🚀 Status
✅ Day-2 completed successfully  
📌 Focused on recall, precision, and logical discipline

---

## 🔜 Next
Day-3: Two Pointers Variations & Pattern Lock-In
