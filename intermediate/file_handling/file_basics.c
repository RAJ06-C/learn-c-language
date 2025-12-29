#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;

    // Open a file in write mode
    // If the file doesn't exist, it will be created.
    // If it exists, it will be overwritten.
    fptr = fopen("example.txt", "w");

    // Check if the file was opened successfully
    if (fptr == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    printf("File opened successfully.\n");

    // Close the file
    fclose(fptr);
    printf("File closed successfully.\n");

    return 0;
}
