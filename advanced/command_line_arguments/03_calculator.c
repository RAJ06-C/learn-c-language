#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <operand1> <operator> <operand2>\n", argv[0]);
        printf("Example: %s 10 + 5\n", argv[0]);
        return 1;
    }

    double num1 = atof(argv[1]);
    char *op = argv[2];
    double num2 = atof(argv[3]);
    double result = 0;

    // Use strcmp to compare strings. Returns 0 if equal.
    if (strcmp(op, "+") == 0) {
        result = num1 + num2;
    } else if (strcmp(op, "-") == 0) {
        result = num1 - num2;
    } else if (strcmp(op, "x") == 0 || strcmp(op, "*") == 0) {
        // Note: '*' might be expanded by shell as wildcard, user strictly needs to escape it or use 'x'
        result = num1 * num2;
    } else if (strcmp(op, "/") == 0) {
        if (num2 == 0) {
            printf("Error: Division by zero.\n");
            return 1;
        }
        result = num1 / num2;
    } else {
        printf("Unknown operator: %s\n", op);
        return 1;
    }

    printf("%.2f %s %.2f = %.2f\n", num1, op, num2, result);

    return 0;
}
