#include <stdio.h>

/*
    Operators:
    #  : Stringify (converts argument to string)
    ## : Token Pasting (concatenates two arguments)
*/

// Stringify example
#define TO_STRING(x) #x

// Token Pasting example
// Creates distinct variable names e.g., VAR(1) -> var1
#define CONCAT(a, b) a##b

int main() {
    // 1. Stringify
    printf("Stringify: %s\n", TO_STRING(Hello World)); 
    // prints: "Hello World"

    // 2. Token Pasting
    int xy = 100;
    
    // We want to print variable 'xy' by combining 'x' and 'y'
    printf("Value of xy using token pasting: %d\n", CONCAT(x, y));

    // Practical use: Generating boilerplate code
    int var1 = 10, var2 = 20;
    // Printing var1
    printf("Var1: %d\n", CONCAT(var, 1)); 

    return 0;
}
