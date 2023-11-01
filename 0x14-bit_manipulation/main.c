#include "main.h"
#include <stdio.h> // Include the stdio.h header

int main(void) {
    const char *binary = "1101"; // Replace with your binary string
    unsigned int decimal = binary_to_uint(binary);
    printf("Decimal: %u\n", decimal); // Use the correct format specifier and argument
    return 0;
}
