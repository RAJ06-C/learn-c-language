#include <stdio.h>

// Define specific flags to enable/disable features
#define DEBUG
// #define WINDOWS_OS 

int main() {
    printf("Program starting...\n");

    // Check if DEBUG is defined
    #ifdef DEBUG
        printf("[DEBUG] Debug Mode is ON.\n");
        printf("[DEBUG] Variable tracing enabled.\n");
    #endif

    // Check if Windows OS is defined, otherwise assume Linux/Mac
    #ifdef WINDOWS_OS
        printf("Running on Windows implementation.\n");
    #else
        printf("Running on Linux/Unix implementation.\n");
    #endif

    // Using value-based conditionals
    #define VERSION 2

    #if VERSION >= 2
        printf("Feature Set V2 enabled.\n");
    #elif VERSION == 1
        printf("Feature Set V1 enabled.\n");
    #else
        printf("Legacy Version.\n");
    #endif

    // Header Guards logic commonly used in .h files:
    // #ifndef MY_HEADER_H
    // #define MY_HEADER_H
    // ... content ...
    // #endif

    return 0;
}
