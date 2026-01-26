# Week 2 – Day 5: Two Pointers Technique (Arrays)

## 🎯 Goal
Learn how to use **two pointers** to solve array problems efficiently, especially when the task involves **in-place modification**, **order preservation**, or **controlled traversal**.

The goal is not to memorize pointer tricks, but to **understand why and when two pointers reduce unnecessary work**.

---

## 📘 Topics Covered
- What the two pointers technique really means
- Read pointer vs write pointer
- In-place array modification
- Preserving order while rearranging elements
- Eliminating extra space using index control

---

## 🧠 Two Pointers from First Principles

### What is the Two Pointers Technique?
Two pointers simply means **using two indices instead of one**, where each index has a **clear responsibility**.

🧠 **Important mindset shift**  
Two pointers is NOT about speed first —  
It’s about **control**.

---

### Real-life Analogy
Imagine arranging books on a shelf:
- One hand scans books from left to right
- Another hand places valid books in correct positions
- You don’t need a new shelf — you rearrange **in place**

That’s exactly what two pointers do.

---

## 🔍 Core Pattern: Read vs Write Pointer

### What the problem is really asking (Move Zeroes)
> Move all zeroes to the end of the array **without changing the relative order** of non-zero elements.

Key constraints hidden in the problem:
- You must scan everything
- You must not disturb order
- You must not use extra space

---

### Naive Approach
- Create a new array
- Copy non-zero elements
- Fill remaining with zeroes

❌ Problems:
- Uses extra space
- Avoidable
- Not interview-optimal

---

### Optimized Two Pointer Intuition

🧠 Think like this:
- One pointer **reads** everything
- One pointer **decides where to write**
- Writing happens only for valid elements

This avoids:
- Shifting elements repeatedly
- Nested loops
- Extra memory

---

### Why This Works
- Each element is visited once → O(n)
- Order is preserved because writing follows scan order
- Only indices move — no extra array needed

---

## ⏱️ Time & Space Complexity (Simple Explanation)

- Time Complexity: **O(n)**  
  Each element is processed once.

- Space Complexity: **O(1)**  
  No extra array used, only a few variables.

---

## 📂 Files in This Folder

| File Name | Description |
|---------|-------------|
| `two_pointers_basics.cpp` | Introduces left and right pointer movement |
| `move_zeroes.cpp` | Core two-pointer problem using read/write logic |
| `lc_283_move_zeroes.cpp` | LeetCode 283 – Move Zeroes (interview version) |

---

## 🧠 Key Learnings
- Two pointers give control over traversal
- Read and write pointers can have different roles
- In-place solutions are often preferred in interviews
- Pointer movement must be intentional, not automatic
- Many array rearrangement problems reduce to this pattern

---

## 🚀 Status
✅ Day-5 completed successfully  
📌 Focused on mastering pointer movement and in-place thinking

---

## 🔜 Next
Day-6: Hashing with arrays and frequency-based problems
