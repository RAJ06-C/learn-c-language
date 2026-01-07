#include <stdio.h>

// 1. Defining a constant
#define PI 3.14159

// 2. Defining a function-like macro
// Always use parentheses around arguments to avoid operator precedence issues
#define AREA_CIRCLE(r) (PI * (r) * (r))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    float radius = 5.0;
    int x = 10, y = 20;

    printf("Value of PI: %.5f\n", PI);
    printf("Area of circle with radius %.2f: %.2f\n", radius, AREA_CIRCLE(radius));
    printf("Max of %d and %d is %d\n", x, y, MAX(x, y));

    // Basic textual substitution
    #define STATUS "Active"
    printf("Current Status: %s\n", STATUS);

    // Undefining a macro
    #undef STATUS
    // printf("%s", STATUS); // This would cause a compile error now

    return 0;
}
