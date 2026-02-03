# Week 3 – Day 6: Advanced Subarrays & Circular Logic

## 🎯 Goal
Strengthen understanding of **advanced subarray problems** by extending Kadane’s algorithm to handle **products, negative values, and circular arrays**.

This day focuses on adapting known patterns to harder variants instead of learning new techniques.

---

## 📘 Topics Covered
- Modified Kadane’s algorithm
- Tracking maximum and minimum values simultaneously
- Circular subarray logic
- Prefix and suffix product thinking
- Handling negative numbers and edge cases

---

## 🧠 Advanced Subarray Thinking from First Principles

Subarray problems are about **continuous segments** of an array.  
As problems become harder, the challenge is no longer scanning — it’s **handling constraints correctly**.

### Real-life analogy  
Think of tracking profit and loss:
- One bad day (negative value) can flip gains into losses
- Sometimes, the best period wraps around the end of the month

This is exactly what advanced subarray problems model.

---

## 🔍 What the Problems Are Really Asking

### LC 152 — Maximum Product Subarray  
**Real question:**  
> Can you find the maximum product when negative numbers can flip signs?

This tests whether you understand why **both maximum and minimum values must be tracked**.

---

### LC 918 — Maximum Sum Circular Subarray  
**Real question:**  
> Is the maximum subarray contained inside the array, or does it wrap around?

This tests your ability to **separate circular and non-circular cases**.

---

### LC 238 — Product of Array Except Self  
**Real question:**  
> Can you compute results for each index using global information **without division**?

This tests prefix and suffix reasoning.

---

## ❌ Naive Approach (Why It Fails)

- Nested loops for subarrays → O(n²)
- Recomputing products repeatedly
- Using division (fails with zeros)
- Manually handling circular arrays

These approaches are inefficient and error-prone.

---

## ✅ Optimized Thinking

### Core ideas:
- Track both **max and min** when signs can flip
- Convert circular problems into linear ones
- Use prefix and suffix passes to reuse work
- Handle edge cases explicitly (all negatives, zeros)

These insights turn complex problems into linear solutions.

---

## ⏱️ Time & Space Complexity Summary

| Problem | Time Complexity | Space Complexity |
|------|----------------|------------------|
| LC 152 | O(n) | O(1) |
| LC 918 | O(n) | O(1) |
| LC 238 | O(n) | O(1) extra |

---

## 📂 Files in This Folder

| File Name | Description |
|---------|-------------|
| `lc_152_maximum_product_subarray.cpp` | Modified Kadane with min/max tracking |
| `lc_918_maximum_sum_circular_subarray.cpp` | Circular array logic using Kadane |
| `lc_238_product_of_array_except_self.cpp` | Prefix and suffix product approach |

---

## 🧠 Key Learnings
- Kadane’s algorithm can be adapted beyond sums
- Negative values require tracking both extremes
- Circular problems often reduce to clever linear ones
- Prefix and suffix patterns avoid repeated computation
- Most “hard” problems reuse familiar ideas

---

## 🚀 Status
✅ Day-6 completed successfully  
📌 Focused on depth, edge cases, and pattern adaptation

---

## 🔜 Next
Day-7: Revision, Confidence & Resume-Grade Problems
