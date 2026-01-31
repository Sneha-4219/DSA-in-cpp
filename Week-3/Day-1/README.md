# Week 3 – Day 1: Two Pointers & Simple Scanning

## 🎯 Goal
Strengthen problem-solving confidence by applying **simple scanning and two pointers** to real LeetCode problems.

The goal of this day is to **translate problem statements into pointer movement logic**, rather than relying on brute force or memorized tricks.

---

## 📘 Topics Covered
- Revisiting simple scanning from a problem-solving perspective
- Two pointers technique (left / right)
- Read–write pointer pattern
- In-place modification of arrays and strings
- Understanding when hashing is unnecessary

---

## 🧠 Thinking from First Principles

### What is Simple Scanning (Revisited)?
Simple scanning means:
> Looking at each element **once**, in a controlled manner, while tracking useful information.

### Real-life analogy  
Imagine checking attendance in a class:
- You go through each student once
- You don’t re-check students already seen
- You update your record as you move forward

That’s scanning.

Two pointers are an **extension of this idea** — instead of one scanner, you now have **two controlled positions**.

---

## 🧭 What is the Two Pointers Technique?

Two pointers means:
> Using **two indices with clear responsibilities** instead of blindly looping.

Common roles:
- Left pointer → start of data
- Right pointer → end of data
- Or  
- Read pointer → scans everything  
- Write pointer → controls placement

### Real-life analogy  
Think of arranging books on a shelf:
- One hand picks books one by one
- Another hand places only the correct books in order
- No new shelf is needed

That’s in-place two-pointer thinking.

---

## 🔍 What the Problems Are Really Asking

### LC 167 — Two Sum II (Sorted Array)
**Real question:**  
> Can you find two numbers efficiently **using the fact that the array is sorted**?

You’re not being tested on addition —  
You’re being tested on **whether you exploit structure**.

---

### LC 344 — Reverse String
**Real question:**  
> Can you reverse data **without extra memory**?

This checks:
- Pointer control
- In-place thinking
- Boundary handling

---

### LC 27 — Remove Element
**Real question:**  
> Can you remove unwanted data **without shifting repeatedly or using extra space**?

This tests:
- Read vs write responsibility
- Clean in-place modification

---

## ❌ Naive Approach (Why It’s Inefficient)

### Typical naive thinking:
- Nested loops
- Repeated shifting of elements
- Creating new arrays unnecessarily

Example problems:
- Rechecking pairs → O(n²)
- Shifting elements after deletion → slow and messy

📌 These approaches work for small inputs but **fail at scale**.

---

## ✅ Optimized Thinking (Two Pointers Intuition)

The optimized idea is always:
> “Can I solve this in one pass by controlling indices better?”

### Core intuition:
- Move pointers **based on conditions**
- Never undo work already done
- Use structure (sorted data, fixed positions)

This reduces:
- Time complexity
- Code complexity
- Mental load during interviews

---

## ⏱️ Time & Space Complexity (Simple Explanation)

| Problem | Time Complexity | Space Complexity |
|------|----------------|------------------|
| LC 167 | O(n) | O(1) |
| LC 344 | O(n) | O(1) |
| LC 27 | O(n) | O(1) |

**Why?**
- Each element is processed at most once
- No extra arrays or data structures are used

---

## 📂 Files in This Folder

| File Name | Description |
|---------|-------------|
| `lc_167_two_sum_ii.cpp` | Two pointers on sorted array |
| `lc_344_reverse_string.cpp` | In-place string reversal |
| `lc_27_remove_element.cpp` | Read/write pointer removal logic |

---

## 🧠 Key Learnings
- Simple scanning is the foundation of most array problems
- Two pointers give control, not just speed
- Sorted data often removes the need for hashing
- In-place solutions are interview-preferred
- Most “hard” problems become easier with the right pointer logic

---

## 🚀 Status
✅ Day-1 completed successfully  
📌 Focused on applying known patterns with clarity and confidence

---

## 🔜 Next
Day-2: Sliding Window (Fixed and Variable)
