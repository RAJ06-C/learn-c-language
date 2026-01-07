#include <stdio.h>
#include <stdarg.h>

// Function to calculate average of defined number of arguments
// 'count' tells us how many args follow
double average(int count, ...) {
    va_list args;
    double sum = 0;

    // Initialize args to retrieve arguments after 'count'
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        // Retrieve next argument. We must specify the Type (e.g., int, double)
        // Note: 'float' promotes to 'double' in variadic args
        int val = va_arg(args, int);
        sum += val;
    }

    // Cleanup
    va_end(args);

    return count > 0 ? sum / count : 0;
}

void print_strings(int count, ...) {
    va_list args;
    va_start(args, count);
    
    for(int i = 0; i < count; i++) {
        char *str = va_arg(args, char*);
        printf("%s ", str);
    }
    printf("\n");
    
    va_end(args);
}

int main() {
    printf("Average of 2, 3, 4: %.2f\n", average(3, 2, 3, 4));
    printf("Average of 10, 20: %.2f\n", average(2, 10, 20));

    print_strings(3, "Hello", "Advanced", "C");

    return 0;
}
