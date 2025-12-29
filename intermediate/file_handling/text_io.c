#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char buffer[100];

    // --- WRITING TO A FILE ---
    fptr = fopen("text_data.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    fprintf(fptr, "Hello, World!\n");
    fputs("This is a text file handling example.\n", fptr);
    
    printf("Data written to file.\n");
    fclose(fptr);

    // --- READING FROM A FILE ---
    fptr = fopen("text_data.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("\nReading from file:\n");
    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(fptr);
    return 0;
}
