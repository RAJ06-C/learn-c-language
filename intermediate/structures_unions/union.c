#include <stdio.h>
#include <string.h>

// Union Definition
// A union is a user-defined data type in C that allows you to store different
// data types in the same memory location. You can define a union with many
// members, but only one member can contain a value at any given time.
// The size of a union is the size of its largest member. This is because
// all members share the same memory space.

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // Declare a union variable
    union Data data;

    // --- Size of Union ---
    // The size of the union will be the size of its largest member.
    // In this case, it's the size of the char array 'str' (20 bytes).
    printf("Memory size occupied by data: %zu bytes\n", sizeof(data));
    printf("----------------------------------------\n\n");

    // --- Storing and Accessing an Integer ---
    // Assign an integer value to the 'i' member
    data.i = 10;
    printf("--- After storing an integer ---\n");
    printf("data.i: %d\n", data.i);
    // Accessing data.f and data.str now will result in garbage values
    // because the memory is currently interpreted as an integer.
    printf("data.f (garbage): %f\n", data.f);
    printf("----------------------------------------\n\n");


    // --- Storing and Accessing a Float ---
    // Assign a float value to the 'f' member
    data.f = 220.5;
    printf("--- After storing a float ---\n");
    printf("data.f: %f\n", data.f);
    // The previous integer value (data.i) is now corrupted because the
    // same memory location is now used to store a float.
    printf("data.i (corrupted): %d\n", data.i);
    printf("----------------------------------------\n\n");


    // --- Storing and Accessing a String ---
    // Assign a string value to the 'str' member
    strcpy(data.str, "C Programming");
    printf("--- After storing a string ---\n");
    printf("data.str: %s\n", data.str);
    // The float and integer values are now corrupted.
    printf("data.f (corrupted): %f\n", data.f);
    printf("data.i (corrupted): %d\n", data.i);
    printf("----------------------------------------\n\n");

    // Key takeaway:
    // Unions are useful for memory management when you need to work with
    // different data types but know that you will only use one at a time.
    // This is different from a struct, which would allocate space for all
    // its members separately.

    return 0;
}
