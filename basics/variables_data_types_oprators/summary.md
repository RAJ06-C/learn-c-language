# 🧠 Variables and Data Types in C

Variables and data types are the foundation of any programming language, and C is no exception.  
Understanding how data is stored, accessed, and manipulated is essential for writing efficient C programs.

---

## 🧾 What is a Variable?

A **variable** in C is a named memory location that stores a value.  
You can think of a variable as a container for data that can change during program execution.

### 🔹 Example:
```c
int age = 20;
float height = 5.9;
char grade = 'A';

```
---
## ⚙️ Rules for Naming Variables

* ** Variable names can contain letters (A-Z, a-z), digits (0-9), and underscore (\_).**
* **The first character must be a letter or underscore, not a digit.**
* **C is case-sensitive, so `total` and `Total` are different variables.**
* **Variable names cannot be C keywords (like `int`, `return`, `float`).**
* **There should be no spaces or special characters like @, $, % in variable names.**

---

### 📦 What are Data Types?

**A data type defines the type of data a variable can hold, such as:**

* **Integers** (whole numbers)
* **Floating-point numbers**
* **Characters**
* **Derived types** like arrays, structures, etc.

---

# Data Types in C

Each **variable in C** has an associated **data type**. It specifies the type of data that the variable can store, like integer, character, floating-point, double, etc.

**Example:**

```c
int number;
```
![datatypes](data_type_in_c.webp "DATA TYPES IN C")

# Integer Data Type in C

The **integer datatype** in C is used to store whole numbers (any number including positive, negative, and zero) **without a decimal part**. Octal values, hexadecimal values, and decimal values can also be stored in the `int` data type.

| Feature              | Details                                      |
| :------------------- | :------------------------------------------- |
| **Range**            | -2,147,483,648 to 2,147,483,647              |
| **Size**             | 4 bytes                                      |
| **Format Specifier** | `%d` (used for printing and scanning values) |

**Example Declaration:**

We use the `int` keyword to declare the integer variable:

```c
int val;

```

---

A variable of a given data type can only contain **values of the same type**. For example, if you declare an integer variable, it can only store numbers, not text or anything else.

---
## Integer Data Type Modifiers (Variations)
---

The basic integer data type (`int`) can be modified using keywords to change its range and size.

| Modifier                 | Description                                                                               | Typical Size & Range        |
| :----------------------- | :---------------------------------------------------------------------------------------- | :-------------------------- |
| **`unsigned int`**       | Stores data values from zero to positive numbers, but **cannot store negative values**.   | 4 bytes; 0 to 4,294,967,295 |
| **`short int`**          | Typically **lesser in size** (by 2 bytes) than a standard `int`.                          | 2 bytes; -32,768 to 32,767  |
| **`long int`**           | A **larger version** of the `int` datatype, capable of storing values greater than `int`. | 4 or 8 bytes; Larger range  |
| **`unsigned short int`** | Similar in relationship with `short int` as `unsigned int` is with `int`.                 | 2 bytes; 0 to 65,535        |

---

**Note on Size:**

The size of an integer data type is **compiler dependent**. We can use the `sizeof` operator to check the actual size of any data type on your specific system. The sizes mentioned above are typically observed on modern 64-bit compilers.


# Character Data Type (`char`)

The **Character data type** (`char`) allows its variable to store only a **single character**.

It is the most basic data type in C. It stores a single character and requires a single byte of memory in almost all compilers.

| Feature | Details |
| :--- | :--- |
| **Range** | (-128 to 127) or (0 to 255) |
| **Size** | 1 byte |
| **Format Specifier** | `%c` |

# Floating-Point Data Types in C

C provides two main data types for storing real numbers (numbers with a fractional or decimal part): `float` and `double`.

## 1. Float Data Type (`float`)

The `float` data type is used to store **single precision** floating-point values. These values can be decimal and exponential numbers.

| Feature | Details |
| :--- | :--- |
| **Precision** | Single Precision |
| **Range** | 1.2E-38 to 3.4E+38 |
| **Size** | 4 bytes |
| **Format Specifier** | `%f` |

---

## 2. Double Data Type (`double`)

The `double` data type is used to store decimal numbers (numbers with floating point values) with **double precision**. It offers higher precision and a larger range than `float`.

It can easily accommodate about 16 to 17 digits after or before a decimal point.

| Feature | Details |
| :--- | :--- |
| **Precision** | Double Precision |
| **Range** | 1.7E-308 to 1.7E+308 |
| **Size** | 8 bytes |
| **Format Specifier** | `%lf` |

---

# Constants in C Programming

---

In C programming, **constants** are fixed values that **cannot be altered** during the execution of a program. They are also known as **literals** or **read-only variables**. Constants ensure **data integrity** by preventing accidental modifications of important values.

There are two primary ways to define constants in C:

---

## 1. Using the `const` keyword

The `const` keyword declares a variable as constant, meaning its value cannot be changed after initialization.

**Example:**

```c
const int myConstant = 10;
const float PI = 3.14159;

```
---

## 2. Using the #define preprocessor directive

This directive defines `symbolic constants`, which are essentially text substitutions performed by the `preprocessor` before compilation.

***Example***
```c
#define MAX_SIZE 100
#define GREETING "Hello, World!"

```
When the program is compiled, every instance of `MAX_SIZE` will be replaced with `100`, and `GREETING` with `"Hello, World!"`

---

# Type Conversion and Type Casting in C

---

In C programming, **type conversion** and **type casting** refer to the process of changing a value from one data type to another. These concepts are crucial for managing data types in expressions and ensuring correct calculations.

## 1. Type Conversion (Implicit Type Conversion / Coercion)

This type of conversion is performed **automatically by the compiler** without any explicit instruction from the programmer.

It generally occurs in situations where the compiler can safely convert one data type to another without potential data loss, or when performing operations involving mixed data types.

**Example:**

When an **integer** is added to a **float**, the integer is **implicitly converted to a float** before the addition takes place, and the result will be a float.

```c
int num = 10;
float value = 5.5;
float result = num + value; // 'num' is implicitly converted to 10.0f
```
# Type Casting (Explicit Type Conversion)

**Type casting** is performed **explicitly by the programmer** using the **cast operator**.

This is necessary when the conversion might involve potential data loss (e.g., converting a `float` to an `int`), or when the programmer wants to explicitly control the type of an expression.

### Syntax:

```c
(target_data_type) expression
```
---

# ⚙️ Operator Precedence and Associativity in C

In C programming, expressions can contain multiple operators such as `+`, `-`, `*`, `/`, `=`, and many others.  
To correctly evaluate such expressions, **C follows specific rules** known as **operator precedence** and **associativity**.

---

## 🧠 What is Operator Precedence?

**Operator precedence** determines **which operation is performed first** in an expression that contains more than one operator.

If two operators appear in an expression, the one with **higher precedence** is evaluated first.

---

### 🧩 Example:
```c
int result = 10 + 20 * 30;
```
---

## 🔄 What is Associativity?

When two or more operators have the **same precedence**, the associativity of the operators determines the **order of evaluation** — either from ***left to right*** or **right to left**.

### 🧩 Example:

```c
int result = 100 / 10 * 5;
```
Both `/` and `*` have the same precedence.
So how does C decide which to evaluate first?

---

## 🧠 Operator Precedence and Associativity Table


| **Category**       | **Operator**                                             | **Associativity** | **Description**                                                                                                |
| ------------------ | -------------------------------------------------------- | ----------------- | -------------------------------------------------------------------------------------------------------------- |
| **Postfix**        | `()` `[]` `->` `.` `++` `--`                             | Left to Right     | Function call, array subscripting, structure member access, and post-increment/decrement                       |
| **Unary**          | `+` `-` `!` `~` `++` `--` `(type)` `*` `&` `sizeof`      | Right to Left     | Unary plus/minus, logical NOT, bitwise NOT, pre-increment/decrement, type casting, pointer operations, size of |
| **Multiplicative** | `*` `/` `%`                                              | Left to Right     | Multiplication, division, modulus                                                                              |
| **Additive**       | `+` `-`                                                  | Left to Right     | Addition and subtraction                                                                                       |
| **Shift**          | `<<` `>>`                                                | Left to Right     | Bitwise left shift and right shift                                                                             |
| **Relational**     | `<` `<=` `>` `>=`                                        | Left to Right     | Relational operators to compare values                                                                         |
| **Equality**       | `==` `!=`                                                | Left to Right     | Equality and inequality comparison                                                                             |
| **Bitwise AND**    | `&`                                                      | Left to Right     | Bitwise AND operation                                                                                          |
| **Bitwise XOR**    | `^`                                                      | Left to Right     | Bitwise XOR operation                                                                                          |
| **Bitwise OR**     | `\|`                                                     | Left to Right     | Bitwise OR operation                                                                                           |
| **Logical AND**    | `&&`                                                     | Left to Right     | Logical AND operation                                                                                          |
| **Logical OR**     | `\|\|`                                                   | Left to Right     | Logical OR operation                                                                                           |
| **Conditional**    | `?:`                                                     | Right to Left     | Ternary conditional expression                                                                                 |
| **Assignment**     | `=` `+=` `-=` `*=` `/=` `%=` `<<=` `>>=` `&=` `^=` `\|=` | Right to Left     | Assignment and compound assignment operators                                                                   |
| **Comma**          | `,`                                                      | Left to Right     | Separates expressions, evaluates from left to right                                                            |

---

# ⚙️ Operations in C

## 📘 Introduction
In the C programming language, **operations** are performed using **operators** and **operands**.  
An **operator** is a symbol that tells the compiler to perform a specific mathematical or logical operation,  
while an **operand** is the data or variable on which the operator acts.

For example:
```c
int result = a + b;
```
---

## 🔢 Types of Operations in C

- C language provides several types of operations that can be categorized as follows:

| **Category**                         | **Operators**                     | **Description**                                                                                                  |
| ------------------------------------ | --------------------------------- | ---------------------------------------------------------------------------------------------------------------- |
| **Arithmetic Operations**            | `+`, `-`, `*`, `/`, `%`           | Used to perform basic mathematical operations like addition, subtraction, multiplication, division, and modulus. |
| **Relational Operations**            | `==`, `!=`, `>`, `<`, `>=`, `<=`  | Used to compare two values. The result is either true (1) or false (0).                                          |
| **Logical Operations**               | `&&`, `\|\|`, `!`                 | Used to perform logical operations — AND, OR, and NOT — on boolean expressions.                                  |
| **Bitwise Operations**               | `&`, `\|`, `^`, `~`, `<<`, `>>`   | Used to perform operations on binary (bit-level) data.                                                           |
| **Assignment Operations**            | `=`, `+=`, `-=`, `*=`, `/=`, `%=` | Used to assign values to variables or modify existing ones.                                                      |
| **Increment/Decrement Operations**   | `++`, `--`                        | Used to increase or decrease the value of a variable by 1.                                                       |
| **Conditional (Ternary) Operations** | `?:`                              | Used to make decisions in a single line using a condition.                                                       |
| **Comma Operation**                  | `,`                               | Allows multiple expressions to be evaluated in a single statement.                                               |
| **Miscellaneous Operations**         | `sizeof`, `&`, `*`, `(type)`      | Includes operators for memory and type-related operations.                                                       |

---
## ➕ Arithmetic Operations

| **Operator** | **Meaning**    | **Example** | **Result**                     |
| ------------ | -------------- | ----------- | ------------------------------ |
| `+`          | Addition       | `a + b`     | Sum of `a` and `b`             |
| `-`          | Subtraction    | `a - b`     | Difference between `a` and `b` |
| `*`          | Multiplication | `a * b`     | Product of `a` and `b`         |
| `/`          | Division       | `a / b`     | Quotient of `a` divided by `b` |
| `%`          | Modulus        | `a % b`     | Remainder after division       |

---


## 🔍 Relational Operations

| **Operator** | **Meaning**      | **Example** | **Result**                      |
| ------------ | ---------------- | ----------- | ------------------------------- |
| `==`         | Equal to         | `a == b`    | True if `a` equals `b`          |
| `!=`         | Not equal to     | `a != b`    | True if `a` not equal to `b`    |
| `>`          | Greater than     | `a > b`     | True if `a` is greater than `b` |
| `<`          | Less than        | `a < b`     | True if `a` is less than `b`    |
| `>=`         | Greater or equal | `a >= b`    | True if `a` ≥ `b`               |
| `<=`         | Less or equal    | `a <= b`    | True if `a` ≤ `b`               |

---

##   🧠 Logical Operations

| **Operator** | **Meaning** | **Example**          | **Result**              |
| ------------ | ----------- | -------------------- | ----------------------- |
| `&&`         | Logical AND | `(a > 0 && b > 0)`   | True if both are true   |
| `\|\|`       | Logical OR  | `(a > 0 \|\| b > 0)` | True if any one is true |
| `!`          | Logical NOT | `!(a > b)`           | Reverses logical state  |

---

##   🔢 Bitwise Operations

| **Operator** | **Meaning** | **Example** | **Result (Binary)**              |
| ------------ | ----------- | ----------- | -------------------------------- |
| `&`          | Bitwise AND | `a & b`     | 1 if both bits are 1             |
| `\|`         | Bitwise OR  | `a \| b`    | 1 if any bit is 1                |
| `^`          | Bitwise XOR | `a ^ b`     | 1 if bits are different          |
| `~`          | Bitwise NOT | `~a`        | Inverts bits                     |
| `<<`         | Left shift  | `a << 2`    | Shifts bits left by 2 positions  |
| `>>`         | Right shift | `a >> 2`    | Shifts bits right by 2 positions |

---

##     🧮 Assignment Operations


| **Operator** | **Meaning**         | **Example** | **Equivalent To**           |
| ------------ | ------------------- | ----------- | --------------------------- |
| `=`          | Assignment          | `a = b`     | Assigns value of `b` to `a` |
| `+=`         | Add and assign      | `a += b`    | `a = a + b`                 |
| `-=`         | Subtract and assign | `a -= b`    | `a = a - b`                 |
| `*=`         | Multiply and assign | `a *= b`    | `a = a * b`                 |
| `/=`         | Divide and assign   | `a /= b`    | `a = a / b`                 |
| `%=`         | Modulus and assign  | `a %= b`    | `a = a % b`                 |

---

##    🔼 Increment and Decrement Operations

| **Operator** | **Meaning** | **Example**    | **Explanation**      |
| ------------ | ----------- | -------------- | -------------------- |
| `++`         | Increment   | `++a` or `a++` | Increases value by 1 |
| `--`         | Decrement   | `--a` or `a--` | Decreases value by 1 |


- **📝 Note:**

   - 1) ++a (pre-increment) → Increases first, then uses the value.

    - 2) a++ (post-increment) → Uses the value, then increases.

---
##  ❓ Conditional (Ternary) Operation

| **Operator** | **Syntax**                    | **Meaning**                                                   |
| ------------ | ----------------------------- | ------------------------------------------------------------- |
| `?:`         | `(condition) ? expr1 : expr2` | Executes `expr1` if condition is true, else executes `expr2`. |

---

##  🧩 Miscellaneous Operations

| **Operator** | **Meaning**                             | **Example**                              |
| ------------ | --------------------------------------- | ---------------------------------------- |
| `sizeof`     | Returns size of a variable or data type | `sizeof(int)`                            |
| `&`          | Address of operator                     | `&a` gives memory address of `a`         |
| `*`          | Pointer dereference                     | `*ptr` gives value at address            |
| `(type)`     | Type casting                            | `(float)a` converts integer `a` to float |

---

##  📍Local and Global Variables

-   ##  Gbobal variables
  
  Global variables are variables that are declared outside of any function or block of code and can be accessed from any part of the program. Unlike local variables, which have limited scope, global variables have a broader scope and can be used across multiple functions, modules, or files within a program

-   ##  Local variables

  Local variables are variables that are declared within a specific scope, such as within a function or a block of code. These variables are only accessible within that particular scope and are typically used for temporary storage of data or for performing calculations within a limited context. Once the scope in which a local variable is defined ends, the variable typically goes out of scope and its memory is released.

In many programming languages, local variables have a limited visibility and lifespan compared to global variables, which are accessible from any part of the program. This encapsulation of variables within specific scopes helps to organize code, prevent unintended modifications, and manage memory efficiently.

---
