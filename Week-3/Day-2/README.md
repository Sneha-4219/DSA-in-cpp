# Week 3 – Day 2: Sliding Window (Fixed & Variable)

## 🎯 Goal
Learn to solve array problems efficiently using the **sliding window technique**, where a window of elements is expanded or shrunk instead of recomputing results repeatedly.

This day focuses on **controlling a window**, not brute-force scanning.

---

## 📘 Topics Covered
- Fixed-size sliding window
- Variable-size sliding window
- Window expansion and shrinking logic
- Avoiding repeated sum calculations
- Translating problem statements into window movement

---

## 🧠 Sliding Window from First Principles

### What is Sliding Window?
Sliding window means:
> Instead of recalculating values for every subarray,  
> we **reuse previous work** by moving a window forward.

### Real-life analogy  
Imagine tracking your **daily expenses for the last 7 days**:
- You don’t recalculate the sum every day from scratch
- You subtract the oldest day and add the newest day

That’s sliding window.

---

## 🔍 What the Problems Are Really Asking

### LC 643 — Maximum Average Subarray I
**Real question:**  
> Among all subarrays of size `k`, which one has the maximum sum?

This is **not** about averages —  
it’s about **efficiently tracking a fixed-size window sum**.

---

### LC 209 — Minimum Size Subarray Sum
**Real question:**  
> What is the smallest subarray whose sum is at least `target`?

This tests:
- Can you expand the window to reach a condition?
- Can you shrink it to minimize length?

---

## ❌ Naive Approach (Why It’s Inefficient)

- Generate all subarrays
- Compute sum for each one
- Time complexity becomes **O(n²)**

This works for small inputs, but fails at scale.

---

## ✅ Optimized Sliding Window Thinking

### Core intuition:
- Keep a running sum
- Expand window to include new elements
- Shrink window when conditions are met
- Never redo work unnecessarily

This reduces time complexity to **O(n)**.

---

## ⏱️ Time & Space Complexity Summary

| Problem | Time Complexity | Space Complexity |
|------|----------------|------------------|
| LC 643 | O(n) | O(1) |
| LC 209 | O(n) | O(1) |

Each element enters and leaves the window at most once.

---

## 📂 Files in This Folder

| File Name | Description |
|---------|-------------|
| `lc_643_maximum_average_subarray_i.cpp` | Fixed-size sliding window |
| `lc_209_minimum_size_subarray_sum.cpp` | Variable-size sliding window |

---

## 🧠 Key Learnings
- Sliding window avoids repeated computation
- Fixed and variable windows require different control logic
- Window movement must be **condition-driven**
- Many array problems become linear with the right window strategy

---

## 🚀 Status
⬜ Day-2 in progress  
📌 Focused on mastering sliding window mechanics

---

## 🔜 Next
Add optimized sliding window solutions for both problems
