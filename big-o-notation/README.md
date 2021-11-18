# Big O notation

## It describes how performance of code slows as data grows

- Machine independent, it is just related to the number of steps to completion of a task

### From best to worst performance considering a large data amount (n) and examples

**1. O(1) - constant time**
  - Random access of an element in an array
  - Insertion at the _beginning_ of a linkedlist

**2. O(log n) - logarithmic time**
  - Binary search

**3. O(n) - linear time**
  - Loops in an array
  - Search in a linkedlist

**4. O(n log n) - quasilinear time**
  - Quicksort
  - Mergesort
  - Heapsort

**5. O(n^2) - quadratic time**
  - Insertion sort
  - Selection sort
  - Bubblesort

**6. O(n!) - factorial time**
  - Traveling salesman problem