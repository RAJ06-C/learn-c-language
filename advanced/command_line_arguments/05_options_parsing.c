#include <stdio.h>
#include <string.h>

// A simple manual flag parser
int main(int argc, char *argv[]) {
    int i;
    int verbose = 0;
    char *name = "User";

    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-v") == 0 || strcmp(argv[i], "--verbose") == 0) {
            verbose = 1;
        } 
        else if (strcmp(argv[i], "-n") == 0 && i + 1 < argc) {
            // Check if next argument exists and use it as name
            name = argv[++i]; // Increment i to skip the name in next loop
        }
        else if (strcmp(argv[i], "--help") == 0) {
            printf("Usage: %s [options]\n", argv[0]);
            printf("Options:\n");
            printf("  -v, --verbose    Enable verbose output\n");
            printf("  -n <name>        Set user name\n");
            printf("  --help           Show this help message\n");
            return 0;
        }
        else {
            printf("Unknown option: %s\n", argv[i]);
            return 1;
        }
    }

    if (verbose) {
        printf("Verbose mode is ON.\n");
        printf("Processing complete for user '%s'.\n", name);
    }

    printf("Hello, %s!\n", name);

    return 0;
}
