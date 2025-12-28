# Week 1 – Day 4: Pointers & References (Critical Day)

## 🎯 Goal
Develop a clear and safe understanding of memory, pointers, and references so that future topics like arrays, strings, and STL feel intuitive instead of confusing.

---

## 📘 Topics Covered
- Memory model (stack memory & variable lifetime)
- Address operator (`&`) and dereference operator (`*`)
- Pointer declaration and usage
- Modifying variables using pointers
- Dangling pointers (block scope & function scope)
- References as a safer alternative to pointers
- Pass by reference
- Why STL prefers references over pointers

---

## 📂 Files in This Folder

| File Name | Description |
|---------|-------------|
| `pointers_basics.cpp` | Pointer declaration, dereferencing, and modifying variables |
| `dangling_pointer_examples.cpp` | Common dangling pointer cases and unsafe patterns |
| `reference_basics.cpp` | Reference behavior, aliasing, and safety rules |
| `swap_using_reference.cpp` | Swapping values using pass by reference |
| `stl_reference_examples.cpp` | Reference usage in STL-style functions |

---

## 🧠 Key Learnings
- Every variable has a memory address
- Pointers store addresses, not values
- Dereferencing accesses the value at an address
- Returning the address of a local variable causes dangling pointers
- References act as aliases and are safer than pointers
- Pass by reference allows modifying original data efficiently
- STL uses references to avoid unnecessary copying

---

## 🚀 Status
✅ Day-4 completed successfully  
📌 Focused on understanding memory behavior and safe data access  
📌 No arrays or dynamic memory used yet

---

## 🔜 Next
Day-5: STL Containers (`vector`, `pair`, `map`, `set`) and their usage patterns
