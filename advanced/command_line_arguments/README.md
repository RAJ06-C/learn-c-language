# Command Line Arguments Examples

This folder contains examples demonstrating how to use command line arguments in C.

## Files

| File | Description |
|------|-------------|
| `01_print_args.c` | Basics: Prints all arguments passed to the program. |
| `02_sum_numbers.c` | Conversion: Uses `atoi` to sum valid integer arguments. |
| `03_calculator.c` | Logic: A simple CLI calculator (e.g., `./calc 5 + 3`). |
| `04_file_reader.c` | I/O: Takes a filename as an argument and reads it. |
| `05_options_parsing.c` | Advanced: Manually parsing flags like `-v` or `-n Name`. |

## How to Test

Compile the programs first, then run them with arguments.

### 1. Print Args
```bash
gcc 01_print_args.c -o printer
./printer hello world 123
```

### 2. Sum Numbers
```bash
gcc 02_sum_numbers.c -o adder
./adder 10 20 30
# Output: 60
```

### 3. Calculator
**Note for Windows (PowerShell/CMD):** The `*` character is usually safe, but in Linux shells it's a wildcard. If using `*`, wrap it in quotes (`'*'`).
```bash
gcc 03_calculator.c -o calc
./calc 10 + 5
./calc 20 / 4
```

### 4. File Reader
Create a dummy text file first.
```bash
gcc 04_file_reader.c -o reader
echo "Hello from file!" > test.txt
./reader test.txt
```

### 5. Options Parsing
```bash
gcc 05_options_parsing.c -o myapp
./myapp -v -n Alice
# Output:
# Verbose mode is ON.
# Hello, Alice!
```
