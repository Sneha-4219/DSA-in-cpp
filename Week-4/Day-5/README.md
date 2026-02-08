# Week 4 – Day 5: Sliding Window (Recall + Traps)

## 🎯 Goal
Strengthen **sliding window mastery** by focusing on **recall, logic discipline, and common traps** that cause wrong answers in interviews.

This day is about:
- Rebuilding the sliding window template from memory
- Understanding *when* to update answers
- Avoiding subtle but costly mistakes

After this day, you should be able to:
- Write sliding window solutions without looking at references
- Debug wrong answers quickly
- Explain time and space complexity with confidence

---

## 📘 Topics Covered
- Sliding window recall template
- Expand vs shrink decision logic
- Common sliding window traps
- Time and space reasoning
- Applying recall to harder constraints

---

## 🧠 Sliding Window Recall from First Principles

Sliding window is not a trick — it is a **controlled way of scanning substrings**.

Instead of restarting for every possible substring:
- You **expand** to include new elements
- You **shrink** only when constraints are violated
- You update answers **only when the window is valid**

If you ever feel lost, it means one of these rules is being broken.

---

## 🧩 Sliding Window Template (Logic Only)

Before coding, you must clearly answer:

### 1️⃣ Expand Condition
- When do I move the `right` pointer?
- What changes in the window state when I expand?

Example:
- Adding a character
- Increasing a frequency count

---

### 2️⃣ Shrink Condition
- When does the window become invalid?
- What must be removed to restore validity?

Shrinking is **not optional** — it enforces correctness.

---

### 3️⃣ When to Update the Answer
- Only when the window is **valid**
- Never during an invalid state

Many bugs come from updating the answer too early.

---

## ❌ Common Sliding Window Traps (Very Important)

These mistakes frequently appear even in medium problems:

1. Updating the answer **before** the window is valid  
2. Shrinking the window **too late**, allowing invalid states  
3. Forgetting to decrement frequency when shrinking  
4. Miscalculating window length (`right - left + 1`)  
5. Misunderstanding constraints like **“at most k”** vs **“exactly k”**

If a solution fails hidden test cases, it’s usually one of these.

---

## ⏱️ Time & Space Reasoning (From First Principles)

### Why Sliding Window Is O(n)
- Each element enters the window once
- Each element leaves the window once
- Total operations scale linearly

---

### Why Brute Force Substrings Are O(n²)
- You restart scanning for every index
- Work is repeated unnecessarily
- No reuse of previous computation

---

### Why Hash Map Space Is Acceptable
- Maps track **only window content**
- Character sets are bounded
- Space is constant relative to input size

This tradeoff is intentional and efficient.

---

## 🔍 What the Problems Are Really Asking

### LC 3 — Longest Substring Without Repeating Characters (Repeat)
> Can you maintain uniqueness while dynamically resizing a window?

This reinforces:
- Shrinking logic
- Valid window maintenance
- Correct answer updates

---

### LC 424 — Longest Repeating Character Replacement  
> Can you allow limited violations and still maximize window size?

This tests:
- “At most k” reasoning
- Almost-valid window handling
- Delayed shrinking

---

### LC 1456 — Maximum Number of Vowels in a Substring of Given Length  
> Can you apply sliding window when the window size is fixed?

This reinforces:
- Fixed window discipline
- Efficient count updates

---

## 📂 Files in This Folder

| File Name | Description |
|---------|-------------|
| `lc_3_longest_substring_no_repeat.cpp` | Recall-based variable window |
| `lc_424_longest_repeating_char.cpp` | Sliding window with allowed violations |
| `lc_1456_max_vowels_fixed_window.cpp` | Fixed window vowel counting |

---

## 🧠 Key Learnings
- Sliding window success depends on discipline
- Shrinking restores correctness
- “At most” means controlled invalidity
- Most bugs come from wrong update timing
- Clear logic beats complex code

---

## 🚀 Status
✅ Day-5 completed successfully  
📌 Focused on recall, traps, and interview robustness

---

## 🔜 Next
Day-6: Sliding Window (Advanced Matching & Optimization)
