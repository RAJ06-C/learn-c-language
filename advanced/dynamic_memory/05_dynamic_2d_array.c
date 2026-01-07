#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 4;
    int i, j;
    
    // 1. Allocate memory for 'rows' number of pointers
    int **arr = (int**)malloc(rows * sizeof(int*));
    if (arr == NULL) return -1;

    // 2. Allocate memory for each row (array of integers)
    for (i = 0; i < rows; i++) {
        arr[i] = (int*)malloc(cols * sizeof(int));
        if (arr[i] == NULL) return -1; // Handle error appropriately in real code
    }

    // Initialize
    int count = 0;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            arr[i][j] = ++count;
        }
    }

    // Print
    printf("Dynamic 2D Array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    // Deallocate
    // 1. Free each row
    for (i = 0; i < rows; i++) {
        free(arr[i]);
    }
    // 2. Free the array of pointers
    free(arr);
    
    printf("Successfully freed 2D array.\n");

    return 0;
}
