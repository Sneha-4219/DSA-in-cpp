# Week 3 – Day 4: Prefix Sum & Subarray Depth

## 🎯 Goal
Develop a deeper understanding of **subarrays** by applying **prefix sum thinking** and learning how past information can be reused to solve problems efficiently.

This day focuses on moving from simple scanning to **subarray-level reasoning**, which is critical for interviews.

---

## 📘 Topics Covered
- Prefix sum concept
- Subarray sum calculation
- Using hashing with prefix sums
- Avoiding repeated subarray computations
- Left-sum vs right-sum balance logic

---

## 🧠 Prefix Sum from First Principles

Prefix sum means:
> Storing cumulative information so future queries become easy.

### Real-life analogy  
Think of your bank account:
- You don’t recalculate your total money from day one
- You carry forward yesterday’s balance and update it

That carried-forward balance is a prefix sum.

---

## 🔍 What the Problems Are Really Asking

### LC 724 — Find Pivot Index  
**Real question:**  
> Can you find an index where the sum of elements on the left equals the sum on the right?

This problem tests your ability to reason about **balance using cumulative sums**.

---

### LC 560 — Subarray Sum Equals K  
**Real question:**  
> How many continuous subarrays add up to `k`?

This is not about generating subarrays explicitly —  
it’s about understanding how **earlier prefix sums relate to the current sum**.

---

## ❌ Naive Approach (Why It’s Inefficient)

- Generate all possible subarrays
- Compute the sum for each subarray
- Time complexity becomes **O(n²)**

This approach works only for very small inputs and fails at scale.

---

## ✅ Optimized Prefix Sum Thinking

### Core intuition:
- Maintain a running prefix sum
- A subarray sum equals `k` if:
- currentPrefix - previousPrefix = k
- Use hashing to remember how many times each prefix sum has appeared

For pivot index:
- Track left sum
- Derive right sum from total sum
- Compare both in constant time

---

## ⏱️ Time & Space Complexity Summary

| Problem | Time Complexity | Space Complexity |
|------|----------------|------------------|
| LC 724 | O(n) | O(1) |
| LC 560 | O(n) | O(n) |

Each element is processed once, with no unnecessary recomputation.

---

## 📂 Files in This Folder

| File Name | Description |
|---------|-------------|
| `lc_724_find_pivot_index.cpp` | Balance index using cumulative sums |
| `lc_560_subarray_sum_equals_k.cpp` | Prefix sum + hashing approach |

---

## 🧠 Key Learnings
- Prefix sums eliminate repeated work
- Subarray problems often need memory of the past
- Hashing and prefix sums work extremely well together
- Many “hard” problems reduce to simple equations
- Understanding *why* the formula works is more important than memorizing it

---

## 🚀 Status
✅ Day-4 completed successfully  
📌 Focused on prefix sum intuition and subarray reasoning

---

## 🔜 Next
Day-5: Sorted Arrays, Binary Search & Two Pointers
