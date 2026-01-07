# Dynamic Memory Examples

This folder contains illustrative examples of dynamic memory management in C.

## Files

| File | Description |
|------|-------------|
| `01_malloc_free.c` | Basic usage of `malloc` for allocation and `free` for deallocation. |
| `02_calloc_realloc.c` | Using `calloc` for zero-initialized arrays and `realloc` to resize them. |
| `03_memory_leaks.c` | Demonstrates what a memory leak is (and how to avoid it). |
| `04_dangling_pointers.c` | Explains the danger of using pointers after freeing them. |
| `05_dynamic_2d_array.c` | Advanced: Creating a 2D array (matrix) dynamically. |
| `06_struct_pointers.c` | Advanced: Allocating structs and dynamic strings within structs. |

## How to Compile & Run

You can compile these files using `gcc`.

```bash
gcc 01_malloc_free.c -o test_malloc
./test_malloc
```
