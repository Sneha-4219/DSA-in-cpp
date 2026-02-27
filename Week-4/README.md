# Week 4 — Strings (Two Pointers & Sliding Window)

## 🎯 Goal
Master two of the most important string patterns for technical interviews:

- **Pattern A — Two Pointers (Strings)**
- **Pattern B — Sliding Window (Strings)**

By the end of this week, you should:
- Instantly recognize pattern triggers
- Maintain invariants confidently
- Explain correctness without code
- Defend time & space complexity clearly
- Handle interview pressure calmly

This week focuses on **thinking discipline**, not memorization.

---

# 🧠 Patterns Covered

## 🔹 Pattern A — Two Pointers (Strings)

Used when:
- Comparing characters from both ends
- Checking symmetry or palindromes
- Skipping characters
- Reversing strings
- Removing characters conditionally

### Core Invariant
> All characters outside the left and right pointers are already processed correctly.

### Key Idea
Shrink the problem from both ends while preserving correctness.

### Time & Space
- Time → O(n)
- Space → O(1)

---

## 🔹 Pattern B — Sliding Window (Strings)

Used when:
- Substring / contiguous problems
- Longest / shortest constraints
- Frequency / count conditions
- “At most k” / “No repeating”

### Core Invariant
> At every step, the window is valid or almost-valid according to the problem constraint.

### Key Idea
Expand to explore.
Shrink to restore validity.
Never restart.

### Time & Space
- Time → O(n)
- Space → O(1) or O(k)

---

# 📅 Day-by-Day Breakdown

## 🟦 Day 1 — Two Pointers (Foundation)
- Trigger recognition
- Pointer setup & movement rules
- Skipping logic
- Core invariant
- Problems:
  - LC 125 — Valid Palindrome
  - LC 680 — Valid Palindrome II
  - LC 121 — Best Time to Buy and Sell Stock

---

## 🟦 Day 2 — Two Pointers (Recall + Depth)
- Pattern reconstruction from memory
- Mismatch handling logic
- Common traps
- Complexity reasoning
- Problems:
  - LC 125 (repeat)
  - LC 917 — Reverse Only Letters
  - LC 2108 — First Palindromic String

---

## 🟦 Day 3 — Two Pointers (Interview Pressure)
- Rejecting brute force
- Decision-based reasoning
- Final invariant articulation
- Problems:
  - LC 680 (repeat)
  - LC 1616 — Split Two Strings to Make Palindrome
  - LC 33 — Search in Rotated Sorted Array

---

## 🟦 Day 4 — Sliding Window (Foundation)
- Trigger keywords
- Fixed vs variable window
- Expand → shrink logic
- Frequency map reasoning
- Problems:
  - LC 1876 — Substrings of Size Three with Distinct Characters
  - LC 3 — Longest Substring Without Repeating Characters
  - LC 53 — Maximum Subarray

---

## 🟦 Day 5 — Sliding Window (Recall + Traps)
- Template reconstruction
- Common sliding window mistakes
- “At most k” reasoning
- Problems:
  - LC 3 (repeat)
  - LC 424 — Longest Repeating Character Replacement
  - LC 1456 — Maximum Number of Vowels in a Substring of Given Length

---

## 🟦 Day 6 — Sliding Window (Pattern Lock)
- One-page final summary
- Trigger rules
- Invariants
- Time & space lock-in
- Problem:
  - LC 424 (repeat)
  - LC 3 (repeat)

---

## 🟦 Day 7 — Detailed Revision (Most Important)
No new learning.

- Pattern Recall
- Dry-Run Recall
- Interview Simulation
- Confidence building

Files:
- `PATTERN_RECALL.md`
- `DRY_RUN_RECALL.md`
- `INTERVIEW_SIMULATION.md`

---

# 🔥 What You Can Now Do

After Week-4, you should be able to:

✔ Identify two pointers instantly  
✔ Identify sliding window instantly  
✔ Explain invariants confidently  
✔ Defend O(n) complexity  
✔ Avoid brute force automatically  
✔ Handle interview follow-ups calmly  

You are no longer memorizing solutions.  
You are deriving them.

---

# 🧠 Mental Comparison (Final Lock-In)

| Two Pointers | Sliding Window |
|--------------|----------------|
| Opposite ends | Continuous range |
| Pairwise comparison | Expand + Shrink |
| No frequency map | Uses frequency tracking |
| Symmetry problems | Substring problems |
| Simple invariant | Validity invariant |

If you can explain this table without looking — patterns are locked.

---

# 🚀 Week-4 Status

✅ Pattern A — Two Pointers (Strings)  
✅ Pattern B — Sliding Window (Strings)  
✅ Interview Simulation Completed  
✅ Invariant-Based Reasoning Strengthened  

🔥 String pattern mastery achieved.

---

## 🔜 Next
Week-5 — Binary Search