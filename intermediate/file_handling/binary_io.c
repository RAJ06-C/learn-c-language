#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fptr;
    struct Student s1 = {"John Doe", 101, 85.5};
    struct Student s2;

    // --- WRITING BINARY DATA ---
    fptr = fopen("student.bin", "wb");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    fwrite(&s1, sizeof(struct Student), 1, fptr);
    printf("Binary data written to file.\n");
    fclose(fptr);

    // --- READING BINARY DATA ---
    fptr = fopen("student.bin", "rb");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    fread(&s2, sizeof(struct Student), 1, fptr);
    printf("\nData read from binary file:\n");
    printf("Name: %s\n", s2.name);
    printf("Roll: %d\n", s2.roll);
    printf("Marks: %.2f\n", s2.marks);

    fclose(fptr);
    return 0;
}
