#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char ch;

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    // Attempt to open the file provided in argument 1
    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Error: Could not open file '%s'\n", argv[1]);
        return 1;
    }

    printf("--- Contents of %s ---\n", argv[1]);
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }
    printf("\n--- End of File ---\n");

    fclose(fp);
    return 0;
}
