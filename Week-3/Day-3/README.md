# Week 3 – Day 3: Hashing & Frequency Mastery

## 🎯 Goal
Strengthen problem-solving confidence by applying **hashing and frequency-based thinking** to array problems, and learn to choose the **right tool** instead of relying on brute force.

This day focuses on **what information to store and why**, not just implementation.

---

## 📘 Topics Covered
- Hash maps for frequency counting
- Hash sets for presence checking
- Optimizing space using XOR
- Understanding problem requirements before choosing a data structure
- Eliminating repeated work using O(1) lookups

---

## 🧠 Hashing from First Principles

Hashing means:
> **Remembering useful information so you don’t have to search again.**

### Real-life analogy  
Think of counting votes:
- You don’t recount all votes every time
- You maintain a tally and update it as votes come in

That tally is hashing.

---

## 🔍 What the Problems Are Really Asking

### LC 242 — Valid Anagram  
> Do both strings contain the **same characters with the same frequency**?

### LC 349 — Intersection of Two Arrays  
> Which elements appear in **both arrays**, regardless of how many times?

### LC 169 — Majority Element  
> Is there an element that appears **more than n / 2 times**?

### LC 136 — Single Number  
> Which element appears **only once**, while all others appear exactly twice?

Each problem tests **a different kind of memory requirement**:
- Frequency?
- Presence?
- Cancellation?

---

## ❌ Naive Approach (Why It’s Inefficient)

- Nested loops
- Repeated counting
- Comparing every element with every other

This leads to **O(n²)** time complexity, which fails for large inputs.

---

## ✅ Optimized Hashing Thinking

### Core intuition:
- Store information once
- Reuse it instantly
- Never recompute what you already know

Choosing the right tool:
- `unordered_map` → frequency tracking
- `unordered_set` → presence checking
- XOR → eliminate duplicates without extra space

---

## ⏱️ Time & Space Complexity Summary

| Problem | Time Complexity | Space Complexity |
|------|----------------|------------------|
| LC 242 | O(n) | O(1) / O(26) |
| LC 349 | O(n + m) | O(n) |
| LC 169 | O(n) | O(n) |
| LC 136 | O(n) | O(1) |

Each solution processes elements linearly and avoids unnecessary extra memory.

---

## 📂 Files in This Folder

| File Name | Description |
|---------|-------------|
| `lc_242_valid_anagram.cpp` | Frequency comparison using hashing |
| `lc_349_intersection_of_two_arrays.cpp` | Set-based intersection |
| `lc_169_majority_element.cpp` | Majority element using optimal approach |
| `lc_136_single_number.cpp` | XOR-based unique element detection |

---

## 🧠 Key Learnings
- Hashing converts searching into remembering
- Frequency and presence are fundamentally different problems
- XOR can eliminate extra space when conditions allow
- The best solution depends on **what needs to be remembered**
- Clean thinking matters more than complex code

---

## 🚀 Status
✅ Day-3 completed successfully  
📌 Focused on hashing intuition and frequency reasoning

---

## 🔜 Next
Day-4: Prefix Sum & Subarray Depth
