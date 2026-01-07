#include <stdio.h>
#include <stdlib.h>

void cause_leak() {
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 10;
    printf("Inside function: Allocated memory for value %d\n", *ptr);
    // FORGOT TO FREE!
    // When this function returns, 'ptr' (stored on stack) is destroyed.
    // However, the heap memory it pointed to is still allocated.
    // We have no way to reach it or free it now.
} 

void no_leak() {
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 20;
    printf("Inside safe function: Allocated memory for value %d\n", *ptr);
    free(ptr); // Clean up!
    printf("Memory freed correctly.\n");
}

int main() {
    printf("Calling function with memory leak...\n");
    cause_leak();
    printf("Function returned. Memory is leaked (lost).\n\n");

    printf("Calling function with no leak...\n");
    no_leak();
    
    return 0;
}
