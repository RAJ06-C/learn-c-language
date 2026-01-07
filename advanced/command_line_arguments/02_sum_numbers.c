#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i;
    int sum = 0;

    if (argc == 1) {
        printf("Usage: %s <num1> <num2> ...\n", argv[0]);
        return 1;
    }

    printf("Calculating sum of %d numbers...\n", argc - 1);

    for (i = 1; i < argc; i++) {
        // atoi converts string to integer
        int num = atoi(argv[i]); 
        sum += num;
        printf("Adding: %d\n", num);
    }

    printf("Total Sum: %d\n", sum);

    return 0;
}
