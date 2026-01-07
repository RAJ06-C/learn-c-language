# Command Line Arguments in C

Command line arguments allow you to handle inputs from the command line interface (CLI) when you execute your program. This makes your programs flexible and capable of handling data without hardcoding it or requiring interactive input like `scanf`.

## The `main` Function Prototype

To accept command line arguments, you define `main` with two parameters:

```c
int main(int argc, char *argv[])
```

### 1. `argc` (Argument Count)
- An integer that represents the number of arguments passed to the program.
- **Note:** It counts the program name itself. So, if you run `./prog`, `argc` is 1.

### 2. `argv` (Argument Vector)
- An array of character pointers (strings) listing all the arguments.
- `argv[0]`: The name of the program.
- `argv[1]`: The first argument passed by the user.
- ...
- `argv[argc]`: A `NULL` pointer.

## Parsing Arguments

Arguments are always passed as **strings**. If you need numbers, you must convert them.

### Common Conversion Functions (`<stdlib.h>`)
- **`atoi(str)`**: Convert string to `int`. returns 0 if conversion fails (basic).
- **`atof(str)`**: Convert string to `double`.
- **`strtol(str, endptr, base)`**: Convert string to `long int` (safer, allows error checking).
- **`strtod(str, endptr)`**: Convert string to `double` (safer).

## Example Structure

```bash
./my_program arg1 arg2 100
```
- `argc` = 4
- `argv[0]` = "./my_program"
- `argv[1]` = "arg1"
- `argv[2]` = "arg2"
- `argv[3]` = "100"
