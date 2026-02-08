# STRING — SLIDING WINDOW (FINAL)

## 🎯 Purpose
This page locks the **Sliding Window pattern on strings** so you can recall it instantly in interviews without rethinking logic.

If you understand everything on this page, you can solve **most substring problems confidently**.

---

## 🔔 Pattern Trigger Words
Sliding Window should trigger immediately when you see:

- **substring**
- **contiguous**
- **longest / shortest**
- **frequency / count**
- **at most / at least**
- **window size k**

If the problem talks about **continuous characters**, think Sliding Window.

---

## 🧩 Fixed vs Variable Window (Decision Rule)

### Fixed Window
- Window size is **constant (k)**
- Pointers move together
- No conditional shrinking

Triggered by phrases like:
> “substring of size k”  
> “exact length k”

---

### Variable Window
- Window size **changes dynamically**
- Expand until constraint breaks
- Shrink to restore validity

Triggered by phrases like:
> “longest / shortest”  
> “at most k”  
> “no repeating characters”

Choosing the wrong type is the #1 mistake.

---

## 🔁 Expand → Shrink Logic

### Expand (Right Pointer)
- Include a new character
- Update frequency / state
- Window may become invalid

### Shrink (Left Pointer)
- Remove characters
- Restore validity
- Shrinking is **not optional**

You always expand first.  
You shrink **only when needed**.

---

## 🧠 Core Invariant (MEMORIZE THIS)

> **At every step, the window represents a valid or almost-valid substring according to the problem constraint.**

### What “almost-valid” means
- The constraint may be temporarily violated after expansion
- Shrinking restores validity

This invariant guarantees:
- Correctness
- Linear time
- No rechecking of substrings

---

## ⏱️ Time & Space Complexity

- **Time Complexity:** `O(n)`
  - Each character enters and leaves the window at most once

- **Space Complexity:** `O(1)` or `O(Σ)`
  - Depends on character set size
  - Acceptable for strings

If your solution is `O(n²)`, sliding window was missed.

---

## ⭐ Classic Problems (Must Know)

- **LC 3 — Longest Substring Without Repeating Characters**
- **LC 424 — Longest Repeating Character Replacement**

If you can explain these two cleanly,  
you understand Sliding Window.

---

## ✅ Final Reminder
- Sliding Window is about **discipline**, not tricks
- Shrinking restores correctness
- Update answers **only when window is valid**
- Invariants matter more than code

This pattern appears **everywhere** in string interviews.

## 🔜 Next
Day-7: Detailed Revision & Pattern Consolidation
