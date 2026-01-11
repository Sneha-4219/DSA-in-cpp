# Time Complexity Notes

## What is Time Complexity?
Time complexity measures how the running time of an algorithm grows with input size `n`.
It focuses on the growth rate, not actual execution time.

---

## Common Time Complexities
- O(1): Constant time
- O(log n): Logarithmic time (binary search)
- O(n): Linear time
- O(n log n): Sorting-based algorithms
- O(n²): Nested loops (brute force)

---

## Loop Analysis
- Single loop → O(n)
- Nested loops → O(n²)
- Loop with doubling (i *= 2) → O(log n)

---

## Why TLE Happens
If `n = 10^5`:
- O(n log n) → Acceptable
- O(n²) → Time Limit Exceeded

Understanding constraints is critical before coding.
