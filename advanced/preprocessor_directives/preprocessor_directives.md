# Preprocessor Directives in C

The **C Preprocessor** is a macro processor that transforms your program before it is compiled. The preprocessor directives start with a hash symbol (`#`).

## Key Directives

### 1. Macro Definitions (`#define`)
Used to define constants or function-like macros.
- **Constants**: `#define PI 3.14`
- **Macros**: `#define SQUARE(x) ((x)*(x))`

### 2. File Inclusion (`#include`)
Inserts the contents of another file.
- `#include <stdio.h>`: For standard library headers.
- `#include "myfile.h"`: For user-defined headers.

### 3. Conditional Compilation
Allows parts of code to be compiled or ignored based on conditions.
- `#ifdef`, `#ifndef`
- `#if`, `#else`, `#elif`, `#endif`
- Useful for cross-platform code or debugging features.

### 4. Other Directives
- `#undef`: Undefines a macro.
- `#pragma`: Compiler-specific instructions.
- `#error`: Aborts compilation with an error message.

## Preprocessor Operators
- **Stringify (`#`)**: Converts a macro argument into a string constant.
- **Token Pasting (`##`)**: Concatenates two arguments into a single token.

## Predefined Macros
C provides standard macros containing information about the file and compilation:
- `__DATE__`: Current date.
- `__TIME__`: Current time.
- `__FILE__`: Current filename.
- `__LINE__`: Current line number.
- `__STDC__`: 1 if the compiler complies with ISO C standard.
