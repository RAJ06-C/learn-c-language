/*
 * Simple Calculator in C
 * Features: Addition, Subtraction, Multiplication, Division, Modulus
 */

#include <stdio.h>
#include <stdlib.h>

void print_menu() {
    printf("\n============================\n");
    printf("      C CALCULATOR         \n");
    printf("============================\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("6. Exit\n");
    printf("============================\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    double num1, num2, result;
    int int1, int2; // For modulus

    while (1) {
        print_menu();
        if (scanf("%d", &choice) != 1) {
            // Clear input buffer if scanf fails (e.g. user entered char)
            while(getchar() != '\n'); 
            printf("Invalid input. Please enter a number.\n");
            continue;
        }

        if (choice == 6) {
            printf("Exiting Calculator. Goodbye!\n");
            break;
        }

        if (choice < 1 || choice > 6) {
            printf("Invalid choice. Please select 1-6.\n");
            continue;
        }

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 4:
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
            case 5:
                // Modulus only works with integers
                int1 = (int)num1;
                int2 = (int)num2;
                
                if (int2 == 0) {
                     printf("Error: Division by zero is not allowed.\n");
                } else {
                    printf("Result: %d %% %d = %d\n", int1, int2, int1 % int2);
                    if (num1 != int1 || num2 != int2) {
                        printf("(Note: Inputs were truncated to integers for modulus)\n");
                    }
                }
                break;
            default:
                printf("Something went wrong.\n");
        }
    }

    return 0;
}
