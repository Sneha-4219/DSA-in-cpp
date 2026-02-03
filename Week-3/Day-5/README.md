# Week 3 – Day 5: Sorted Arrays, Binary Search & Two Pointers

## 🎯 Goal
Strengthen problem-solving skills by **exploiting sorted data** and applying **binary search and two pointers** instead of brute-force approaches.

This day focuses on recognizing structure in data and using it to reduce time complexity.

---

## 📘 Topics Covered
- Binary search on sorted arrays
- Two pointers for optimal traversal
- Decision-based narrowing of search space
- Combining hashing with custom sorting
- Avoiding unnecessary comparisons

---

## 🧠 Thinking from First Principles

Sorted data provides **guarantees**:
- Values increase in a predictable order
- Search space can be reduced safely
- Not every element needs to be checked

### Real-life analogy  
Finding a name in a **sorted contact list**:
- You don’t scan from start to end
- You jump to the middle and decide which half to search next

That’s binary search thinking.

---

## 🔍 What the Problems Are Really Asking

### LC 35 — Search Insert Position  
**Real question:**  
> Can you find the correct position for a value **without scanning the entire array**?

This tests your ability to **narrow the search space logically**.

---

### LC 11 — Container With Most Water  
**Real question:**  
> Can you maximize an area by moving pointers **intelligently instead of checking all pairs**?

This tests mathematical reasoning combined with pointer control.

---

### LC 1636 — Sort Array by Increasing Frequency  
**Real question:**  
> Can you sort elements using **problem-specific rules**, not default ordering?

This tests:
- Frequency tracking
- Custom comparator logic
- Combining multiple concepts cleanly

---

## ❌ Naive Approach (Why It’s Inefficient)

- Linear scan instead of binary search → O(n)
- Nested loops for pair comparison → O(n²)
- Recomputing frequency repeatedly

These approaches work for small inputs but **fail at scale**.

---

## ✅ Optimized Thinking

### Core ideas:
- Use **binary search** to reduce search space
- Use **two pointers** to eliminate unnecessary comparisons
- Use **hashing** to separate counting from sorting
- Apply **custom logic** only where required

This converts expensive brute-force solutions into efficient ones.

---

## ⏱️ Time & Space Complexity Summary

| Problem | Time Complexity | Space Complexity |
|------|----------------|------------------|
| LC 35 | O(log n) | O(1) |
| LC 11 | O(n) | O(1) |
| LC 1636 | O(n log n) | O(n) |

---

## 📂 Files in This Folder

| File Name | Description |
|---------|-------------|
| `lc_35_search_insert_position.cpp` | Binary search on sorted array |
| `lc_11_container_with_most_water.cpp` | Two pointers optimization |
| `lc_1636_sort_array_by_increasing_frequency.cpp` | Hashing + custom sorting |

---

## 🧠 Key Learnings
- Sorted data enables faster algorithms
- Binary search is about decisions, not guessing
- Two pointers reduce comparisons dramatically
- Combining patterns is common in real interviews
- Clean logic matters more than clever tricks

---

## 🚀 Status
✅ Day-5 completed successfully  
📌 Focused on exploiting sorted structure and efficient searching

---

## 🔜 Next
Day-6: Advanced Subarrays & Circular Array Logic
