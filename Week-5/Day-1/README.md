# Week 5 – Day 1: Classic Binary Search & Rotated Arrays

## 🎯 Goal  
Build a strong foundation in **Binary Search on ordered index space** by understanding why it works — not just how to code it.

Today focuses on:
- Search space elimination
- Maintaining correctness through invariants
- Handling rotated sorted arrays

This is about learning to **reason safely**, not memorizing a template.

---

## 📘 Topics Covered  
- Binary Search fundamentals  
- Search space shrinking logic  
- The invariant that guarantees correctness  
- Boundary movement decisions  
- Rotated sorted array reasoning  

---

## 🧠 Binary Search Thinking from First Principles  

Imagine you are searching for a name in a **dictionary**.

Would you:
- Start from page 1 and read every word?  
Or  
- Open somewhere in the middle and decide which half to discard?

Binary search is about using **order** to eliminate possibilities safely.

The most important idea is this:

> If the target exists, it must always lie within the current search range.

We call this the **invariant**.

Every decision we make must preserve this truth.

If we accidentally discard the half that contains the answer, the algorithm fails — even if the code looks correct.

Binary search works because:
- The data is ordered.
- We eliminate half the possibilities with proof.
- The search space strictly shrinks every step.

---

## 🔍 What the Problem Is Really Asking  

### LC 33 — Search in Rotated Sorted Array  

At first glance, the array looks broken because it has been rotated.

Example:  
`[4,5,6,7,0,1,2]`

It is not fully sorted from start to end.

But look carefully:

At least **one half is always sorted**.

The real question is:

> Can you identify which half is sorted, and safely eliminate the other half without losing the answer?

This tests:
- Logical elimination
- Boundary correctness
- Invariant preservation

---

## ❌ Naive Approach (Why It Fails)

### Approach:
Scan the entire array linearly.

### Why it works:
Eventually you will find the target.

### Why it’s inefficient:
- It ignores ordering.
- Time complexity becomes **O(n)**.
- We waste the fact that half the array can be eliminated each step.

This is like checking every page of a dictionary even though it’s alphabetically ordered.

---

## ✅ Optimized Thinking  

Binary search reduces the problem by half each step.

### Step 1: Find the middle.
If it matches → done.

### Step 2: Determine which half is sorted.
Even in a rotated array, one side must remain sorted.

### Step 3: Check if the target lies inside the sorted half.
- If yes → eliminate the other half.
- If no → eliminate the sorted half.

Each elimination is logical, not random.

We never guess.
We always preserve the invariant:

> If the target exists, it remains inside `[low, high]`.

That is why the algorithm is correct.

---

## 🧩 Real-Life Analogy  

Think of searching for a misplaced book in a shelf that was partially rearranged.

Even if someone rotated the shelf sections, at least one section is still in alphabetical order.

You:
- Identify the ordered section.
- Decide if your book belongs there.
- Ignore the rest.

This prevents unnecessary searching.

---

## ⏱️ Time & Space Complexity Explained Simply  

### Time Complexity: O(log n)

Why?

Each step cuts the remaining possibilities in half.

If you start with 1,000,000 elements:
- After 1 step → 500,000
- After 2 steps → 250,000
- After 3 steps → 125,000
- …

This shrinking continues until only one possibility remains.

That shrinking pattern is logarithmic.

---

### Space Complexity: O(1)

We only use:
- `low`
- `high`
- `mid`

No extra arrays.
No recursion.
Constant extra memory.

---

## ⚠️ Common Mistakes  

- Using incorrect boundary updates
- Breaking the invariant
- Not shrinking the search space
- Infinite loops due to wrong condition (`low < high`)
- Incorrect mid calculation causing overflow

Binary search fails not because it is complex —  
It fails because boundaries are handled carelessly.

---

## 🧠 Key Learnings  

- Binary search is about logical elimination, not splitting randomly.
- Correctness depends on maintaining the invariant.
- Rotated arrays still preserve partial order.
- Every boundary update must shrink the search space.
- Confidence in binary search comes from reasoning, not memorization.

---

## 📂 Files in This Folder  

| File Name | Description |
|------------|-------------|
| `lc_33_search_in_rotated_sorted_array.cpp` | Rotated binary search using sorted-half elimination |

---

## 🚀 Status  
✅ Day-1 completed successfully  
📌 Focused on invariant mastery and boundary reasoning  

---

## 🔜 Next  
Day-2: First & Last Occurrence — mastering boundary precision  