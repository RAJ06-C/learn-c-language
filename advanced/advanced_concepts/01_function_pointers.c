#include <stdio.h>

// Simple functions matching the signature
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

// Function that accepts a function pointer as an argument (Callback)
void perform_operation(int x, int y, int (*operation)(int, int)) {
    int result = operation(x, y);
    printf("Result: %d\n", result);
}

int main() {
    // 1. Basic Function Pointer
    int (*ptr)(int, int);
    
    ptr = &add; // '&' is optional, 'ptr = add' works too
    printf("Add 10 + 5: %d\n", ptr(10, 5));

    ptr = subtract;
    printf("Subtract 10 - 5: %d\n", ptr(10, 5));

    // 2. Using Callbacks
    printf("Callback Multiply: ");
    perform_operation(5, 5, multiply);

    // 3. Array of Function Pointers (Lookup Table)
    // 0: Add, 1: Subtract, 2: Multiply
    int (*ops[])(int, int) = {add, subtract, multiply};
    
    int choice = 2; // For example, user chose Multiply
    if (choice >= 0 && choice < 3) {
        printf("Lookup Table Result: %d\n", ops[choice](10, 10));
    }

    return 0;
}
