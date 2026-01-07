# Advanced C Topics

This section covers sophisticated features of the C language that are crucial for system programming, library development, and optimization.

## Topics Covered

### 1. Function Pointers
Pointers that point to code instead of data. This allows for:
- Callback functions.
- Implementing polymorphism in C.
- Lookup tables for state machines.

### 2. Variadic Functions
Functions that accept a variable number of arguments (e.g., `printf`).
- Header: `<stdarg.h>`
- Macros: `va_list`, `va_start`, `va_arg`, `va_end`.

### 3. Bit Manipulation & Bit Fields
- **Bitwise Operators**: `&`, `|`, `^`, `~`, `<<`, `>>`.
- **Bit Fields**: Specifying the exact number of bits for structure members to save memory.

### 4. Advanced Unions
- Type punning (interpreting the same memory as different types).
- Anonymous unions (C11 feature).

### 5. Type Qualifiers
- **`volatile`**: Tells the compiler not to optimize access to a variable (e.g., hardware registers).
- **`restrict`**: A hint to the compiler for optimization, indicating that a pointer is the only way to access that memory.

### 6. Error Handling (Non-local Jumps)
- **`setjmp` / `longjmp`**: Usage of `<setjmp.h>` to jump across function calls, often used for exception handling in C.
