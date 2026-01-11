# In-Place Algorithms

## Definition
An in-place algorithm uses O(1) auxiliary space and modifies the input directly.

---

## In-Place Examples
- Reverse array using two pointers
- Bubble sort
- Selection sort
- STL sort() (uses O(log n) stack space)

---

## Not In-Place Examples
- Merge sort
- Creating extra arrays of size n
- Recursive solutions with deep call stacks

---

## Important Interview Note
Recursive algorithms are generally NOT considered in-place due to call stack usage.

Understanding space constraints is as important as time complexity.
