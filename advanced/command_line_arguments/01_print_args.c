#include <stdio.h>

int main(int argc, char *argv[]) {
    int i; 

    printf("Program Name: %s\n", argv[0]);
    printf("Number of arguments provided: %d\n", argc);

    if (argc < 2) {
        printf("No additional arguments provided.\n");
    } else {
        printf("Arguments provided:\n");
        for (i = 1; i < argc; i++) {
            printf("Argument %d: %s\n", i, argv[i]);
        }
    }

    return 0;
}
