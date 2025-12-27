# Structures and Unions in C

## Overview
In C programming, **Structures** and **Unions** are user-defined data types that allow you to group different data types together. While they look similar syntactically, they function very differently in terms of memory management.

---

## 1. Structures (`struct`)

A **Structure** is a collection of variables (called members) of different types under a single name. Each member has its own storage location.

### Syntax
```c
struct StructureName {
    dataType member1;
    dataType member2;
    // ...
};
```

### Key Characteristics
*   **Memory Allocation**: The total size of the struct is the sum of the sizes of its members (plus potential padding for alignment).
*   **Independence**: Changing one member does **not** affect others.
*   **Usage**: Used for grouping related attributes of an entity (e.g., a `Student` with `id`, `name`, `gpa`).


---

## 2. Unions (`union`)

A **Union** is a special data type available in C that allows to store different data types in the same memory location. You can define a union with many members, but **only one member can contain a value at any given time**.

### Syntax
```c
union UnionName {
    dataType member1;
    dataType member2;
    // ...
};
```

### Key Characteristics
*   **Memory Allocation**: The memory allocated is equal to the size of the **largest** member. All members share this same memory space.
*   **Interdependence**: Modifying one member will alter the value of other members because they overlap in memory.
*   **Usage**: Used to save memory when you know that only one of the members will be used at a time (e.g., a variable that can be an `int` OR a `float`).


---

## 3. Comparison: Structure vs Union

| Feature | Structure | Union |
| :--- | :--- | :--- |
| **Keyword** | `struct` | `union` |
| **Memory** | Sum of size of all members (plus padding). | Size of the largest member. |
| **Access** | All members can be accessed at any time. | Only one member can be accessed at a time. |
| **Value Alteration** | Altering one member does not affect others. | Altering one member affects others. |
| **Initialization** | All members can be initialized. | Only the first member can be initialized. |