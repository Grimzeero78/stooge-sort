# Stooge Sort (C++ Implementation)

## Overview

Stooge Sort is a recursive, comparison-based sorting algorithm known for its extremely poor time complexity. Although it is not practical for real-world applications, it is often used in computer science education to demonstrate recursion and algorithm analysis.

The algorithm repeatedly sorts overlapping sections of an array until the entire array becomes ordered.

---

# Example Array

```cpp
int arr[] = {8,3,5,1,9,2};
```

### Memory Representation

| Index | Value |
| ----- | ----- |
| 0     | 8     |
| 1     | 3     |
| 2     | 5     |
| 3     | 1     |
| 4     | 9     |
| 5     | 2     |

### Goal

Sort the array in **ascending order**:

```
1 2 3 5 8 9
```

---

# Function Parameters

The sorting function is called as:

```
stoogeSort(arr, l, h)
```

| Variable | Meaning                       |
| -------- | ----------------------------- |
| arr      | The array being sorted        |
| l        | Left index (start of section) |
| h        | Right index (end of section)  |

### Example Function Call

```
stoogeSort(arr,0,5)
```

Meaning:

Sort the array from **index 0 to index 5**.

---

# Step-by-Step Operation

## 1. Compare First and Last Elements

```cpp
if(arr[l] > arr[h])
```

Example:

```
arr[0] = 8
arr[5] = 2
```

Since:

```
8 > 2
```

Swap them.

Array becomes:

```
[2,3,5,1,9,8]
```

### Purpose

This step pushes:

* larger numbers toward the **right**
* smaller numbers toward the **left**

---

## 2. Check Section Size

```cpp
if(h - l + 1 > 2)
```

Formula for size:

```
size = h - l + 1
```

Example:

```
h = 5
l = 0

size = 5 - 0 + 1 = 6
```

Since:

```
6 > 2
```

The algorithm continues recursion.

If the section size is **1 or 2**, it is already sorted.

---

## 3. Calculate t (One Third of Section)

```cpp
int t = (h - l + 1) / 3;
```

Example:

```
size = 6
t = 6 / 3 = 2
```

This value helps determine the **2/3 segments** of the array.

---

## 4. First Recursive Call

```
stoogeSort(arr, l, h - t);
```

Substitute values:

```
l = 0
h = 5
t = 2
```

Call becomes:

```
stoogeSort(arr,0,3)
```

This sorts the first part:

```
[2,3,5,1]
```

---

## 5. Second Recursive Call

```
stoogeSort(arr, l + t, h);
```

Substitute values:

```
l = 0
t = 2
h = 5
```

Call becomes:

```
stoogeSort(arr,2,5)
```

This sorts:

```
[5,1,9,8]
```

---

## 6. Third Recursive Call

```
stoogeSort(arr, l, h - t);
```

Again:

```
stoogeSort(arr,0,3)
```

### Why repeat?

Sorting the second section may disturb the order of overlapping elements.
This third call corrects that.

---

# Overlapping Sections

First section:

```
0 1 2 3
```

Second section:

```
2 3 4 5
```

Shared indexes:

```
2 and 3
```

This overlapping process slowly moves elements to their correct positions.

---

# Visual Progress

Initial array:

```
[8,3,5,1,9,2]
```

After first swap:

```
[2,3,5,1,9,8]
```

After recursive operations:

```
[1,2,3,5,8,9]
```

---

# Key Variables

| Variable | Meaning                                 |
| -------- | --------------------------------------- |
| arr      | Array being sorted                      |
| l        | Start index                             |
| h        | End index                               |
| t        | One-third size of the current section   |
| temp     | Temporary variable used during swapping |

---

# Core Algorithm Logic

Stooge Sort repeatedly performs:

```
1. Fix the first and last element
2. Sort the first 2/3 of the array
3. Sort the last 2/3 of the array
4. Sort the first 2/3 again
```

Each recursive call performs the same steps until the array is sorted.

---

# Time Complexity

Worst-case time complexity:

```
O(n^2.709)
```

This makes Stooge Sort **much slower than common algorithms** such as:

| Algorithm   | Complexity |
| ----------- | ---------- |
| Bubble Sort | O(n²)      |
| Merge Sort  | O(n log n) |
| Quick Sort  | O(n log n) |
| Stooge Sort | O(n^2.709) |

---

# Why the Name "Stooge Sort"

The algorithm is named after **The Three Stooges**, because it repeatedly performs three similar recursive operations, resembling the repetitive comedic actions of the trio.

---

# Summary

Stooge Sort is mainly a **teaching algorithm** used to demonstrate recursion and algorithm analysis.

In simple terms:

```
Stooge Sort repeatedly sorts overlapping 2/3 sections of an array until the entire array becomes ordered.
```
