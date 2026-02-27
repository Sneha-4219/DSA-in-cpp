# Week 5 – Day 2: Bounds, Duplicates & Edge Cases

## 🎯 Goal  
Strengthen boundary precision in Binary Search by mastering:

- First and last occurrence logic  
- Condition-based binary search  
- Off-by-one errors  
- Handling duplicates in rotated arrays  

Today is about learning to control **edges and equality cases** correctly.

Binary search does not usually fail because of logic —  
It fails because of boundary mistakes.

---

## 📘 Topics Covered  
- Lower Bound and Upper Bound thinking  
- First occurrence vs Last occurrence  
- Condition-based binary search  
- Off-by-one errors  
- Rotated arrays with duplicates  

---

## 🧠 Binary Search Thinking from First Principles  

Binary search is not just about finding a value.

Sometimes the real task is:

> Find the first index that satisfies a condition.  
> Find the last index that satisfies a condition.

This is different from:
“Is the element equal to target?”

Think of it like standing in a queue:

If several people are wearing red shirts, and you want:
- The **first** person wearing red  
- The **last** person wearing red  

You cannot stop at the first red shirt you see randomly.  
You must check whether there is another one before or after.

That is why equality-based thinking is insufficient.

---

## 🔍 What the Problems Are Really Asking  

### Lower Bound / Upper Bound Problems  

The real question is:

> What is the first (or last) position where a condition becomes true?

This shifts binary search from:

“Find exact match”

to

“Find boundary of a condition”

That is why we say:

> The answer is the first/last index satisfying a condition.

This is called **condition-based binary search**.

---

### LC 81 — Search in Rotated Sorted Array II  

**Real question:**

> Can you maintain correct elimination logic when duplicates destroy the sorted-half guarantee?

In LC 33, one half was always strictly sorted.  
With duplicates, this is no longer guaranteed.

Duplicates can blur boundaries.

This forces:
- Careful shrinking of space
- Handling equal cases explicitly
- Avoiding infinite loops

---

## ❌ Naive Approach (Why It Fails)

### For Bounds:
- Linear scan to find first and last occurrence → O(n)

### For Duplicates:
- Treating it like normal rotated array logic
- Ignoring equality edge cases
- Failing to shrink boundaries when values are equal

These approaches fail because they:
- Ignore ordering information
- Do not carefully maintain invariants
- Risk infinite loops

---

## ⚠️ Off-by-One Errors (CRITICAL)

Binary search breaks easily when boundaries are handled carelessly.

### Why `low = mid` is dangerous:
If `mid == low`, the search space does not shrink.  
This causes infinite loops.

### Why infinite loops happen:
Because the search space is not strictly reduced.

Binary search must always:
- Eliminate at least one element
- Shrink the interval

If `[low, high]` does not shrink → the algorithm stalls.

---

## ✅ Optimized Thinking  

### For Bounds (First / Last Occurrence)

Instead of checking only equality:

We think in terms of condition:

- First occurrence → find smallest index where `nums[i] >= target`
- Last occurrence → find largest index where `nums[i] <= target`

When condition is true:
- Move left to see if earlier answer exists (for first)
- Move right to see if later answer exists (for last)

We don’t stop at equality —  
We refine the boundary.

---

### For Duplicates in Rotated Arrays

If `nums[low] == nums[mid] == nums[high]`,  
we cannot determine the sorted half clearly.

In that case:
- Shrink boundaries safely
- Reduce ambiguity gradually

This keeps the invariant intact:

> If the target exists, it remains within the current search space.

---

## 🧩 Real-Life Analogy  

Imagine searching for the first defective product in a sorted batch.

You don’t just want “a defective item.”  
You want the **first time quality dropped**.

That is a boundary problem — not a simple equality problem.

Similarly, duplicates in rotated arrays are like blurred labels.  
You must narrow the region carefully until clarity appears.

---

## ⏱️ Time & Space Complexity Explained Simply  

### Lower / Upper Bound

Time Complexity: **O(log n)**  
Because each step eliminates half of the remaining elements.

Space Complexity: **O(1)**  
Only constant extra variables are used.

---

### Rotated Array with Duplicates (LC 81)

Worst-case Time Complexity: **O(n)**  

Why?

If many elements are equal (e.g., `[1,1,1,1,1]`),  
we may shrink boundaries one by one.

Best / Average case remains **O(log n)**.

Space Complexity: **O(1)**

---

## 🧠 Key Learnings  

- Binary search is often about boundaries, not equality.
- First and last occurrence require condition-based thinking.
- Off-by-one errors destroy correctness.
- Search space must shrink every iteration.
- Duplicates weaken the sorted-half guarantee.
- Careful boundary control separates strong solutions from fragile ones.

---

## 📂 Files in This Folder  

| File Name | Description |
|------------|-------------|
| `lc_81_search_in_rotated_sorted_array_II.cpp` | Rotated array with duplicates |
| `first_last_occurrence.cpp` | Lower and upper bound implementation |

---

## 🚀 Status  
✅ Day-2 completed successfully  
📌 Focused on boundary precision and duplicate handling  

---

## 🔜 Next  
Day-3: 2D Matrix Search & Structured Binary Elimination  