#include <stdio.h>

// Define a struct with Bit Fields
typedef struct {
    unsigned int visible : 1;  // 1 bit (0 or 1)
    unsigned int active  : 1;  // 1 bit
    unsigned int volume  : 6;  // 6 bits (0 to 63)
    // Total: 8 bits (usually padded to nearest byte/word boundary)
} Status;

// Union for Type Punning
typedef union {
    float f;
    unsigned int i;
} FloatInt;

int main() {
    // --- Bit Fields ---
    Status server_status;
    server_status.visible = 1;
    server_status.active = 0;
    server_status.volume = 50;
    
    printf("Server Visible: %d\n", server_status.visible);
    printf("Volume Level: %d\n", server_status.volume);
    
    printf("Size of Status struct: %zu bytes\n", sizeof(Status));

    // Overflow check
    // server_status.volume = 70; // 70 is 1000110 in binary, needs 7 bits. 
    // It would be truncated or warned depending on compiler. 
    // 70 (1000110) & 0x3F (111111) = 6 (000110)

    // --- Unions / Type Punning ---
    FloatInt converter;
    converter.f = 3.14159f;
    
    // View raw IEEE 754 representation
    printf("Float: %.5f\n", converter.f);
    printf("Hex Raw: 0x%X\n", converter.i);

    return 0;
}
