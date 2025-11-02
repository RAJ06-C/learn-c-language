# 😀 ARRAYS IN C

**An array is a linear data structure that stores a fixed-size sequence of elements of the same data type in contiguous memory locations. Each element can be accessed directly using its index, which allows for efficient retrieval and modification**

---
## Creating an Array

***The whole process of creating an array can be divided into two primary sub processes i.e.***

- ## Array Declaration

Array declaration is the process of specifying the type, name, and size of the array. In C, we have to declare the array like any other variable before using it.

- syntax

```
data_type array_name[size];

```
---
- ## Array Initialization

***Initialization in C is the process to assign some initial value to the variable. When the array is declared or allocated memory, the elements of the array contain some garbage value. So, we need to initialize the array to some meaningful values.***

- syntax
```
int arr[5] = {1, 2, 3, 4, 5};
```

---

## Accessing Array Elements

Array in C provides random access to its elements, which means that we can access any element of the array by providing the position of the element, called the index

- syntax
```
array_name [index];
```
---

## Update Array Element

***We can update the value of array elements at the given index i in a similar way to accessing an element by using the array `square brackets []` and `assignment operator (=)`.***

- syntax
```
array_name[i] = new_value;
```
---

## C Array Traversal

Array Traversal is the process in which we visit every element of the array in a specific order. For C array traversal, we use loops to iterate through each element of the array.

- example
```
#include <stdio.h>

int main() {
    int arr[5] ={1, 2, 3, 4, 5}
    
    // Print each element of
    // array using loop
    printf("Printing Array Elements\n"); 
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n"); 
    // Printing array element in reverse
    printf("Printing Array Elements in Reverse\n"); 
    for(int i = 4; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
```
---

## Size of Array

***The size of the array refers to the number of elements that can be stored in the array. The array does not contain the information about its- example  size but we can extract the size using sizeof() operator***

- example 
```
#include <stdio.h>

int main() {
    int arr[5] = {2, 4, 8, 2, 6};
    
    // Size of the array
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("%d", size);
    return 0;
}
```
---

#   🔍 SEARCHING & 🤏 SORTING

##  Searching

Searching in C programming typically refers to the process of finding a specific element within a data structure, most commonly an array. Several algorithms are available for this purpose, with the most common being:

##   Linear Search:

-   **Description:** This is the simplest searching technique. It involves iterating through each element of the array sequentially and comparing it with the target element.

-   **Algorithm:**

    -   Start from the beginning of the array.

    -   Compare the current element with the target element.

    -   If a match is found, return the index of the element.

    -   If no match is found after checking all elements, indicate that the element is not present (e.g., return -1).

-   **Advantages:** Easy to implement, works on unsorted arrays.

-   **Disadvantages:** Inefficient for large arrays as it has a time complexity of O(n) in the worst case.

##  ✍️ Example:
```C
    #include <stdio.h>

    int linearSearch(int arr[], int size, int key) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == key) {
                return i; // Element found, return its index
            }
        }
        return -1; // Element not found
    }

    int main() {
        int arr[] = {10, 20, 30, 40, 50};
        int size = sizeof(arr) / sizeof(arr[0]);
        int key = 30;
        int result = linearSearch(arr, size, key);

        if (result != -1) {
            printf("Element found at index: %d\n", result);
        } else {
            printf("Element not found\n");
        }
        return 0;
    }
```
---

##  Binery search

-   **Description:** This is a more efficient algorithm used to find an element in a sorted array. It works by repeatedly dividing the search interval in half.

-   **Algorithm:**
    -   Initialize `low` to the first index and `high` to the last index of the array.
    -   While low is `less` than or equal to `high:`

a. Calculate the `middle` index `mid = (low + high) / 2`.

b. If the element at `mid` matches the `target`, return `mid`.

c. If the target is `smaller` than the element at `mid`, update `high = mid - 1`.

d. If the target is larger than the element at `mid`, update `low = mid + 1`.


-   If the loop finishes and the element is not found, indicate that it's not present.

-   **Advantages:** Highly efficient for large, sorted arrays with a time complexity of `O(log n)`.

-   **Disadvantages:** Requires the array to be sorted.

---

##  🫥 Sorting

A **Sorting Algorithm** is used to rearrange a given array or list of elements in an order. For example, a given array [10, 20, 5, 2] becomes [2, 5, 10, 20] after sorting in increasing order and becomes [20, 10, 5, 2] after sorting in decreasing order.

-   There exist different sorting algorithms for different different types of inputs, for example a binary array, a character array, an array with a large range of values or an array with many duplicates or a small vs large array.

-   The algorithms may also differ according to output requirements. For example, stable sorting (or maintains original order of equal elements) or not stable.

-   Sorting is provided in library implementation of most of the programming languages. These sorting functions typically are general purpose functions with flexibility of providing the expected sorting order (increasing or decreasing or by a specific key in case of objects).

##  Sorting Algorithms:

some of the sorting algorithums are
-   **Comparison Based:**  `Selection Sort`, `Bubble Sort`, `Insertion Sort`, `Merge Sort`, `Quick Sort`, `Heap Sort`, `Cycle Sort`, `3-way Merge Sort`

-   **Non Comparison Based :** `Counting Sort`, `Radix Sort`, `Bucket Sort`, `Pigeonhole Sort`

-   **Hybrid Sorting Algorithms :** `IntroSort`, `TimSort`

-   **Library Implementations:** `qsort() in c`