# Unexpected Behavior with std::vector<bool>

This repository demonstrates a potential issue with using `std::vector<bool>` in C++.  The specialization of `std::vector<bool>` doesn't store booleans as individual bits, leading to potential surprises and performance concerns. The code examples highlight this problem, and the solution shows how to avoid these issues.

## Problem

The primary problem with `std::vector<bool>` stems from its non-standard implementation. Unlike other `std::vector` instantiations, it often doesn't store booleans directly as individual bits. This can result in unexpected behavior regarding memory layout, indexing, and iteration. This can lead to subtle bugs that are difficult to track down.

## Solution

The best practice is to avoid `std::vector<bool>` altogether.  For most cases, using `std::vector<char>` (representing booleans as characters: 0 for false, 1 for true) or `std::vector<int>` provides a much more predictable and efficient alternative.  If memory efficiency is a critical concern, consider using bitsets or other specialized data structures.

## Files

- `bug.cpp`: Demonstrates the potential problem with `std::vector<bool>`.
- `bugSolution.cpp`: Shows the recommended solution using `std::vector<char>`.