# Week 4 – Day 4: Sliding Window on Strings (Foundation)

## 🎯 Goal
Build a **strong first-principles understanding** of the **Sliding Window pattern on strings**, so substring problems stop feeling confusing and start feeling systematic.

This day focuses on:
- Recognizing when sliding window applies
- Understanding *why* it works
- Learning how window expansion and shrinking maintain correctness

After this day, you should be able to:
- Instantly identify sliding window problems
- Decide between fixed and variable windows
- Explain window movement confidently in interviews

---

## 📘 Topics Covered
- Sliding window pattern recognition
- Fixed vs variable window distinction
- Window expansion and shrinking mechanics
- Frequency map reasoning
- Core sliding window invariant
- Dry-run based reasoning

---

## 🧠 Sliding Window Thinking from First Principles

Sliding window problems are about **substrings**, not subsequences.

A substring is:
- Continuous
- Ordered
- Defined by a start and an end

Instead of checking *every possible substring* (which is slow),
sliding window lets us:
- Maintain **one active substring**
- Adjust it intelligently
- Reuse work instead of restarting

---

### Real-life analogy  
Think of reading a banner through a window:
- You only see what fits inside the window
- To see more, you slide the window
- You never re-read characters that already passed

That’s exactly how sliding window works.

---

## 🔍 Pattern Trigger Recognition

Sliding window should trigger when you see keywords like:
- **substring**
- **contiguous**
- **longest / shortest**
- **frequency / count**
- **at most / at least**

### Why substrings → sliding window
- Substrings are continuous
- Continuity allows us to move boundaries gradually
- This enables linear-time solutions instead of nested loops

If the problem says “subarray” or “substring”, sliding window is often the answer.

---

## 🧩 Fixed vs Variable Window

### Fixed Window
- Window size is **constant (k)**
- Both pointers move together
- Example: “substring of size k”

How to recognize:
> “exactly k”, “size k”, “window length fixed”

---

### Variable Window
- Window size **changes dynamically**
- Expand until constraint breaks
- Shrink to restore validity

How to recognize:
> “longest”, “shortest”, “at most k”, “no repeating”

Understanding this distinction prevents wrong implementations.

---

## 🧠 Window Mechanics (CRITICAL)

### What the pointers represent
- **Left pointer:** start of the current window
- **Right pointer:** end of the current window

### What expanding does
- Include a new character
- Update frequency / state
- Possibly violate constraints

### What shrinking does
- Remove a character
- Restore validity
- Make the window usable again

The window is always *moving forward* — never backward.

---

## 🧮 Frequency Map Logic

Strings often require **frequency tracking** because:
- Characters repeat
- Order matters
- Constraints depend on counts

### Rules:
- Increment frequency when expanding
- Decrement frequency when shrinking
- Clean up zero counts when required (for correctness or simplicity)

The map represents **what’s inside the window right now**.

---

## 🧠 Core Invariant (WRITE THIS)

> **“At every step, the window represents a valid or almost-valid substring according to the problem constraint.”**

### What “almost-valid” means
- The constraint may be temporarily violated after expansion
- Shrinking is used to restore validity

### Why shrinking always works
- Violations happen because the window is too large
- Removing elements restores balance

This invariant guarantees correctness and linear time.

---

## 🧪 Mandatory Dry Runs

### Variable Window Example
Dry-run: `"abcabcbb"`

Track:
- `left` and `right`
- frequency map
- window validity
- answer updates

---

### Fixed Window Example
Pick any string with `k = 3`:
- Slide window one step at a time
- Update count
- Never change window size

If you can’t dry-run confidently, don’t code yet.

---

## 🔍 What the Problems Are Really Asking

### LC 1876 — Substrings of Size Three with Distinct Characters  
> Can you maintain a **fixed window** and count valid substrings efficiently?

---

### LC 3 — Longest Substring Without Repeating Characters  
> Can you dynamically resize a window while enforcing uniqueness?

This is the **core sliding window problem**.

---

### LC 53 — Maximum Subarray (Revision)  
> Can you track optimal segments while scanning once?

This reinforces:
- Window-like thinking on arrays
- Maintaining best answers incrementally

---

## ❌ Common Beginner Traps

- Using nested loops for substrings
- Resetting the window instead of shrinking
- Forgetting to update frequency counts
- Confusing fixed and variable window logic
- Moving pointers backward

Avoiding these puts you ahead of most candidates.

---

## ⏱️ Time & Space Complexity (Explained Simply)

- **Time Complexity:** O(n)  
  Each character enters and leaves the window at most once.

- **Space Complexity:** O(1) or O(Σ)  
  Depends on character set size (constant for English letters).

Sliding window trades memory for speed — intelligently.

---

## 📂 Files in This Folder

| File Name | Description |
|---------|-------------|
| `lc_1876_distinct_substrings_size_three.cpp` | Fixed window with frequency tracking |
| `lc_3_longest_substring_no_repeat.cpp` | Variable window with shrinking |
| `lc_53_maximum_subarray.cpp` | Window-style array optimization |

---

## 🧠 Key Learnings
- Substring problems demand sliding windows
- Window movement must preserve invariants
- Shrinking is not optional — it’s essential
- Frequency maps represent window state
- Clarity beats clever tricks

---

## 🚀 Status
✅ Day-4 completed successfully  
📌 Focused on fundamentals, invariants, and dry-run reasoning

---

## 🔜 Next
Day-5: Sliding Window Variations & Advanced Constraints
