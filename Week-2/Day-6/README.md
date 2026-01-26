# Week 2 – Day 6: Hashing & Frequency-Based Problems

## 🎯 Goal
Learn how **hashing** helps solve array problems efficiently by tracking frequency and presence, especially when simple scanning is not enough.

The goal is to **recognize when extra memory can drastically reduce time complexity**.

---

## 📘 Topics Covered
- What hashing really means
- Frequency counting using hash maps
- Presence checking using hash sets
- Eliminating repeated work with O(1) lookups
- Recognizing frequency-based problem patterns

---

## 🧠 Hashing from First Principles

### What is Hashing?
Hashing is a technique to **store information in a way that allows instant access later**.

Instead of repeatedly searching through data, we:
- Store information once
- Look it up in constant time

🧠 Hashing turns searching into remembering.

---

### Real-Life Analogy
Think of a phone contact list:
- You don’t scroll through every name to find someone
- You directly search by name

That direct access is hashing.

---

## 🔍 What Problems Are Really Asking

Most hashing problems are secretly asking:
- Have I seen this element before?
- How many times does this element appear?
- Does this value exist in the data?

Arrays alone are slow at answering these questions.  
Hashing solves this limitation.

---

## 🧠 Frequency Counting Pattern

### Example Thinking (Top K Frequent Elements)
> Which elements appear most frequently?

Instead of counting again and again:
1. Traverse the array once and count frequencies
2. Use the frequency information to extract the answer

🧠 Key shift:
> First **collect information**, then **use it**.

---

## ❌ Naive Approach
- Nested loops
- Repeated counting
- Time complexity: O(n²)

Works only for very small inputs.

---

## ✅ Optimized Hashing Approach
- One pass to build a frequency map
- One pass to process results
- Lookup becomes constant time

🧠 This is a classic **time vs space trade-off**.

---

## ⏱️ Time & Space Complexity (Simple Explanation)

- Time Complexity: **O(n)**  
  Each element is processed once.

- Space Complexity: **O(n)**  
  Extra memory is used to store frequencies.

📌 This trade-off is standard and acceptable in interviews.

---

## 📂 Files in This Folder

| File Name | Description |
|---------|-------------|
| `frequency_count_basics.cpp` | Basic frequency counting using hashing |
| `lc_347_top_k_frequent_elements.cpp` | LeetCode 347 – Top K Frequent Elements |

---

## 🧠 Key Learnings
- Hashing answers “have I seen this?” instantly
- Frequency maps turn raw data into structured information
- Optimization often requires storing past results
- Clean thinking matters more than clever syntax

---

## 🚀 Status
✅ Day-6 completed successfully 
📌 Focused on frequency-based hashing patterns

---

## 🔜 Next
Day-7: Revision, consolidation, and confidence check
