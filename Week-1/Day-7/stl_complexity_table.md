# STL Time Complexity Table

## Vector
- push_back() → O(1) amortized, O(n) worst
- pop_back() → O(1)
- insert / erase at beginning → O(n)

---

## Stack / Queue / Deque
- push → O(1)
- pop → O(1)
- top / front / back → O(1)

---

## Map vs Unordered Map
- map.insert() → O(log n)
- unordered_map.insert() → O(1) average, O(n) worst

---

## Priority Queue
- push() → O(log n)
- pop() → O(log n)
- top() → O(1)

---

## Algorithms
- sort() → O(n log n)
- binary_search() → O(log n)
- lower_bound() → O(log n)
- upper_bound() → O(log n)
