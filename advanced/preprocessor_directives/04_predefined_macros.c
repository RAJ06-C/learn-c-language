#include <stdio.h>

void print_debug_info() {
    // Current Date
    printf("Date: %s\n", __DATE__);
    
    // Current Time
    printf("Time: %s\n", __TIME__);
    
    // Current File Name
    printf("File: %s\n", __FILE__);
    
    // Current Line Number
    printf("Line: %d\n", __LINE__);
    
    // ANSI Standard C compatibility
    #ifdef __STDC__
        printf("Standard C: Yes\n");
    #else
        printf("Standard C: No\n");
    #endif
}

int main() {
    printf("--- Compilation Info ---\n");
    print_debug_info();
    
    printf("\nChecking line number update...\n");
    printf("Current Line: %d\n", __LINE__);

    return 0;
}
