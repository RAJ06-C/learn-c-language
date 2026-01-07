#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    n = 5;
    printf("Number of elements: %d\n", n);

    // Dynamically allocate memory using calloc()
    // calloc initializes memory to zero
    ptr = (int*)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
        printf("Memory successfully allocated using calloc.\n");
        
        printf("Initial values (should be 0): ");
        for (i = 0; i < n; ++i) {
            printf("%d ", ptr[i]);
        }
        printf("\n");

        // Assign values
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }

        printf("Assigned values: ");
         for (i = 0; i < n; ++i) {
            printf("%d ", ptr[i]);
        }
        printf("\n");

        // Reallocate memory
        n = 10;
        printf("Resizing array to %d elements using realloc...\n", n);
        
        ptr = (int*)realloc(ptr, n * sizeof(int));
        
        if (ptr == NULL) {
             printf("Re-allocation failed.\n");
             exit(0);
        }

        printf("Memory successfully re-allocated using realloc.\n");
        
        // Initialize new elements
        for (i = 5; i < n; ++i) {
            ptr[i] = i + 1;
        }

        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d ", ptr[i]);
        }
        printf("\n");

        free(ptr);
    }

    return 0;
}
