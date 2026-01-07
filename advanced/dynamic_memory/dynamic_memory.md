# Dynamic Memory in C

Dynamic Memory Allocation allows you to manually handle memory during the execution of your program. This is different from static or automatic memory allocation (like defining `int x;`), where the size and lifetime are managed by the compiler.

Dynamic memory is managed in a region of memory called the **Heap**.

## Why Dynamic Memory?
- To allocate memory when the size is not known at compile time (e.g., user input determines array size).
- To create data structures that can grow or shrink (linked lists, trees, dynamic arrays).
- To manage lifetime manually (objects that persist beyond a function call).

## Core Functions (`<stdlib.h>`)

### 1. `malloc` (Memory Allocation)
 Allocates a block of uninitialized memory.

**Syntax:**
```c
void* malloc(size_t size);
```
- **Returns:** Pointer to the first byte of allocated memory, or `NULL` if allocation fails.
- **Content:** Garbage values (uninitialized).

### 2. `calloc` (Contiguous Allocation)
Allocates a block of memory for an array of elements and initializes them to zero.

**Syntax:**
```c
void* calloc(size_t num, size_t size);
```
- **Returns:** Pointer to the first byte, or `NULL`.
- **Content:** All bits set to zero.

### 3. `realloc` (Re-Allocation)
Resizes a previously allocated block of memory.

**Syntax:**
```c
void* realloc(void* ptr, size_t new_size);
```
- **Returns:** Pointer to the new block (which might be the same as the old one), or `NULL` if fails.
- **Behavior:**
    - If `new_size` > old size, new memory is uninitialized.
    - If `new_size` < old size, data is truncated.
    - If `ptr` is `NULL`, it acts like `malloc`.
    - If `new_size` is 0, it acts like `free`.

### 4. `free` (Release Memory)
Deallocates the memory previously allocated by `malloc`, `calloc`, or `realloc`.

**Syntax:**
```c
void free(void* ptr);
```
- **Crucial:** Always free memory when you are done to prevent **Memory Leaks**.
- **Note:** Accessing memory after freeing it leads to undefined behavior (**Dangling Pointer**).

## Common Problems

### Memory Leaks
Occur when allocated memory is not freed and the program loses the pointer to it. Over time, this consumes available memory.

### Dangling Pointers
Pointers that point to memory that has already been freed. Dereferencing them is dangerous.
**Fix:** Set pointer to `NULL` after freeing.
```c
free(ptr);
ptr = NULL;
```

### Heap Fragmentation
Repeated allocation and deallocation can leave "holes" in the heap, making it hard to find large contiguous blocks even if total free memory is sufficient.
