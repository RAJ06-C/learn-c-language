#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 42;

    printf("Value: %d\n", *ptr);

    // Free the memory
    free(ptr);
    printf("Memory freed.\n");

    // 'ptr' is now a DANGLING POINTER.
    // It still holds the address of the freed memory.
    
    // UNSAFE: Dereferencing a dangling pointer
    // printf("%d", *ptr); // Undefined behavior! Might crash or print garbage.

    // UNSAFE: Double free
    // free(ptr); // Crashing behavior usually.

    // SAFE PRACTICE:
    ptr = NULL;
    
    if (ptr == NULL) {
        printf("Pointer is now NULL. Safe to check against NULL.\n");
    }

    return 0;
}
