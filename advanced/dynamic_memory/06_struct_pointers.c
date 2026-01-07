#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char *name; // Dynamic string inside struct
} Student;

Student* create_student(int id, const char* name_str) {
    // Allocate struct
    Student *s = (Student*)malloc(sizeof(Student));
    if (s == NULL) return NULL;

    s->id = id;
    // Allocate memory for the name string (+1 for null terminator)
    s->name = (char*)malloc(strlen(name_str) + 1);
    if (s->name == NULL) {
        free(s);
        return NULL;
    }
    strcpy(s->name, name_str);
    
    return s;
}

void free_student(Student *s) {
    if (s != NULL) {
        // Must free inner dynamic members first
        free(s->name);
        // Then free the struct itself
        free(s);
    }
}

int main() {
    Student *s1 = create_student(101, "Alice");
    if (s1 == NULL) {
        printf("Failed to create student.\n");
        return 1;
    }

    printf("Student created:\n");
    printf("ID: %d\n", s1->id);
    printf("Name: %s\n", s1->name);

    free_student(s1);
    printf("Student memory freed.\n");

    return 0;
}
