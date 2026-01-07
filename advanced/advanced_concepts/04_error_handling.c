#include <stdio.h>
#include <setjmp.h>

jmp_buf save_state;

void error_prone_function(int x) {
    if (x == 0) {
        printf("Error: Division by zero detected!\n");
        // Jump back to the point where setjmp was called.
        // The second argument (1) is the return value setjmp will appear to return.
        longjmp(save_state, 1);
    }
    printf("Operation safe: 100 / %d = %d\n", x, 100/x);
}

int main() {
    // setjmp returns 0 on initial call
    // it returns non-zero if we return here via longjmp
    int status = setjmp(save_state);

    if (status == 0) {
        printf("Main: Calling function safely...\n");
        error_prone_function(10);
        
        printf("Main: Calling function with error...\n");
        error_prone_function(0);
        
        printf("This line will NEVER be reached.\n");
    } else {
        printf("Main: Recovered from error (code %d).\n", status);
    }

    return 0;
}
