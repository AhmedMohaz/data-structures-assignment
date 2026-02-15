# Data Structures Assignment 1
**Course:** Computer Science - First Year  
**Topic:** Data Structures Classification (C Programming)  
**Date:** February 2026

---

## 📋 Assignment Overview

This assignment demonstrates the fundamental data structures in C programming language:

1. **Primitive Type Declaration** - Basic data types
2. **Linear Static Structure** - Array
3. **Linear Dynamic Structure** - Singly Linked List
4. **Non-Linear Structure** - Binary Tree

All code is written without comments as requested, using simple variable names like `val`, `arr`, `node1`, etc.

---

## 📁 Project Files

| File | Description | Lines of Code |
|------|-------------|---------------|
| `primitive_type.c` | Primitive data types (int, float, char) | 14 |
| `linear_static_array.c` | Static array implementation | 15 |
| `linear_dynamic_linked_list.c` | Singly linked list implementation | 35 |
| `nonlinear_binary_tree.c` | Binary tree implementation | 38 |
| `ASSIGNMENT_DOCUMENTATION.md` | Complete explanations and research | Full guide |
| `README.md` | This file - project overview | - |

---

## 🚀 How to Compile and Run

### 1. Primitive Type
```bash
gcc primitive_type.c -o primitive_type
./primitive_type
```
**Output:**
```
Integer: 42
Float: 99.99
Character: A
```

### 2. Linear Static Array
```bash
gcc linear_static_array.c -o linear_static_array
./linear_static_array
```
**Output:**
```
Array elements:
arr[0] = 10
arr[1] = 20
arr[2] = 30
arr[3] = 40
arr[4] = 50
```

### 3. Linear Dynamic Linked List
```bash
gcc linear_dynamic_linked_list.c -o linear_dynamic_linked_list
./linear_dynamic_linked_list
```
**Output:**
```
Linked List elements:
100 -> 200 -> 300 -> NULL
```

### 4. Non-Linear Binary Tree
```bash
gcc nonlinear_binary_tree.c -o nonlinear_binary_tree
./nonlinear_binary_tree
```
**Output:**
```
Binary Tree Structure:
Root: 50
Left Child: 30
Right Child: 70
```

---

## 📊 Quick Classification Reference

### Primitive Types
- **Classification:** Basic building blocks
- **Memory:** Contiguous
- **Example:** int, float, char

### Array (Linear Static)
- **Classification:** Linear Static
- **Memory:** Contiguous (all elements next to each other)
- **Size:** Fixed at compile time
- **Use Case:** Student grades, days of the week

### Linked List (Linear Dynamic)
- **Classification:** Linear Dynamic
- **Memory:** Non-Contiguous (nodes scattered in memory)
- **Size:** Flexible (can grow/shrink)
- **Use Case:** Browser history, music playlist

### Binary Tree (Non-Linear)
- **Classification:** Non-Linear
- **Memory:** Non-Contiguous (hierarchical structure)
- **Size:** Flexible (can grow)
- **Use Case:** File systems, organization charts

---

## 🔑 Key Concepts

### Contiguous vs Non-Contiguous Memory

**Contiguous (Array):**
```
Memory: [10][20][30][40][50] ← All together
Address: 1000, 1004, 1008, 1012, 1016
```

**Non-Contiguous (Linked List):**
```
Node1 at 2000 → Node2 at 5040 → Node3 at 7200
Connected by pointers, not physical location
```

### Static vs Dynamic

**Static (Array):**
- Size decided when you write code
- Cannot change during program execution
- Like a parking lot with painted spaces

**Dynamic (Linked List/Tree):**
- Size can change while program runs
- Can add or remove elements anytime
- Like a line at a store - people join/leave

---

## 📚 Real-World Applications

### Arrays
- Student ID lists (fixed class size)
- Monthly sales data (12 months)
- Seat numbers in a theater

### Linked Lists
- Browser undo/redo history
- Music playlist
- Image viewer (next/previous)

### Binary Trees
- File system folders
- Organization charts
- Family trees
- Decision making systems

---

## 🎯 Data Structures vs Algorithms

### Speed Trade-offs
| Operation | Array | Linked List | Binary Tree |
|-----------|-------|-------------|-------------|
| Access element | O(1) Fast | O(n) Slow | O(log n) Medium |
| Insert/Delete | O(n) Slow | O(1) Fast | O(log n) Medium |
| Search | O(n) | O(n) | O(log n) |

### Memory Trade-offs
**100 elements:**
- Array: 400 bytes (just data)
- Linked List: 1200 bytes (data + pointers)
- Binary Tree: 2000 bytes (data + 2 pointers)

**Rule:** More flexibility = More memory usage

---

## ✅ Learning Objectives Achieved

- ✅ Understand primitive data types in C
- ✅ Implement linear static structure (array)
- ✅ Implement linear dynamic structure (linked list)
- ✅ Implement non-linear structure (binary tree)
- ✅ Explain contiguous vs non-contiguous memory
- ✅ Identify real-world applications
- ✅ Understand data structures and algorithms relationship

---

## 📖 Full Documentation

For complete explanations, classifications, and detailed analysis, see:
**`ASSIGNMENT_DOCUMENTATION.md`**

This document includes:
- Detailed classification of each structure
- Memory characteristics
- Real-world applications
- Advantages and disadvantages
- How data structures and algorithms work together
- Speed and memory trade-offs
- Choosing the right structure for different scenarios

---

## 🛠️ Development Notes

- **Language:** C (gcc compiler)
- **Style:** Beginner-friendly, no comments in code
- **Variable Names:** Simple (val, arr, node1, root, etc.)
- **Memory Management:** Proper malloc/free usage
- **Code Quality:** Clean, tested, and working

---

## 📝 Author Notes

This assignment demonstrates fundamental understanding of:
1. Data structure classification hierarchy
2. Memory allocation (stack vs heap)
3. Pointer usage in C
4. Trade-offs between different structures
5. Practical applications in real systems

**All code tested and verified working!** ✅

---

**Good luck with your studies!** 🎓
