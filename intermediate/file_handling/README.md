# File Handling in C

## Introduction
File handling in C is a mechanism to store data permanently in a file. Unlike standard input/output where data is lost upon program termination, file handling allows data persistence. C provides a set of library functions in `<stdio.h>` to perform file operations.

## File Pointer
A file pointer is a reference to a structure of type `FILE`. It serves as a stream that connects the program to the file.

```c
FILE *fptr;
```

## Core Operations

### 1. Opening a File (`fopen`)
The `fopen()` function is used to open a file. It takes the filename and the mode as arguments.

```c
FILE *fopen(const char *filename, const char *mode);
```

**Common Modes:**
| Mode | Description |
| :--- | :--- |
| `"r"` | **Read**: Open for reading. Returns `NULL` if file doesn't exist. |
| `"w"` | **Write**: Open for writing. Creates file if not exists, overwrites if exists. |
| `"a"` | **Append**: Open for appending. Creates file if not exists, writes to end. |
| `"r+"`| **Read/Write**: Open for both reading and writing. |
| `"w+"`| **Read/Write**: Creates new file or overwrites existing. |
| `"a+"`| **Read/Append**: Open for reading and appending. |

### 2. Closing a File (`fclose`)
Always close a file after operations are complete to release resources.

```c
int fclose(FILE *stream);
```

### 3. Reading from a File
- **`fscanf(fptr, "format", ...)`**: Reads formatted input.
- **`fgets(buffer, size, fptr)`**: Reads a line of text.
- **`fgetc(fptr)`**: Reads a single character.
- **`fread(ptr, size, count, fptr)`**: Reads binary data blocks.

### 4. Writing to a File
- **`fprintf(fptr, "format", ...)`**: Writes formatted output.
- **`fputs(str, fptr)`**: Writes a string.
- **`fputc(char, fptr)`**: Writes a single character.
- **`fwrite(ptr, size, count, fptr)`**: Writes binary data blocks.

### 5. File Positioning
- **`fseek(fptr, offset, origin)`**: Moves the file pointer to a specific location.
- **`ftell(fptr)`**: Returns the current position of the file pointer.
- **`rewind(fptr)`**: Resets the file pointer to the beginning.

## Examples in this Directory

- **`file_basics.c`**: Demonstrates basic file opening, error checking, and closing.
- **`text_io.c`**: Shows how to read and write text data using `fprintf`, `fputs`, `fscanf`, and `fgets`.
- **`append_file.c`**: Illustrates how to append data to an existing file without erasing its content.
- **`binary_io.c`**: Covers reading and writing complex data types (structures) using `fread` and `fwrite`.
