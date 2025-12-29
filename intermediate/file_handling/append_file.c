#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char buffer[100];

    // --- APPENDING TO A FILE ---
    // "a" mode opens the file for appending. 
    // If the file doesn't exist, it creates it.
    fptr = fopen("append_data.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file for appending!\n");
        exit(1);
    }

    fprintf(fptr, "This line is appended.\n");
    printf("Data appended to file.\n");
    fclose(fptr);

    // --- READING TO VERIFY ---
    fptr = fopen("append_data.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("\nFile content after appending:\n");
    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(fptr);
    return 0;
}
