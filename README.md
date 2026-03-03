# selection-sort
# Selection Sort Algorithm in C++

## Introduction

Selection Sort is a simple comparison-based sorting algorithm.
It repeatedly selects the smallest element from the unsorted portion of the array and moves it to its correct position.

This project demonstrates the implementation of Selection Sort using C++.

---

##  What is Selection Sort?

Selection Sort divides the array into two parts:

1. Sorted portion (left side)
2. Unsorted portion (right side)

At each step:

* The smallest element in the unsorted portion is found.
* It is swapped with the first unsorted element.
* The boundary between sorted and unsorted portions moves one step forward.

---

##  How the Algorithm Works (Step-by-Step)

For an array of size n:

1. Start at index 0.
2. Assume the first element is the smallest.
3. Compare it with all remaining elements.
4. Find the actual smallest element.
5. Swap it with the first position.
6. Move to the next index.
7. Repeat until n-1 passes are completed.

After each pass, one element is placed in its correct sorted position.

---

##  Time Complexity

Selection Sort always performs the same number of comparisons regardless of input order.

* Best Case: O(n²)
* Average Case: O(n²)
* Worst Case: O(n²)

Reason:
Two nested loops are used, resulting in n × n comparisons.

---

## Space Complexity

* O(1)

Selection Sort is an in-place sorting algorithm.
It does not require extra memory beyond a temporary variable for swapping.

---

##  Stability

Selection Sort is NOT stable by default.
Equal elements may change their relative order after sorting.

---

## Advantages

* Simple to understand and implement
* Works well for small datasets
* Requires no extra memory

---

##  Disadvantages

* Inefficient for large datasets
* Always performs O(n²) comparisons
* Slower than modern algorithms like Merge Sort or Quick Sort

---

## Implementation Language

C++

---

##  Conclusion

Selection Sort is useful for educational purposes to understand sorting logic and algorithm behavior.
However, for large datasets, more efficient algorithms such as Quick Sort or Merge Sort should be used.
