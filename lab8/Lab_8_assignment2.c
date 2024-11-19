#include <stdio.h>

// Define a condition
#define VALUE 10

// Check the condition using #error
#if VALUE != 10
    #error "VALUE is not equal to 10!"
#endif

int main() {
    printf("If you see this message, VALUE is 10.\n");
    return 0;
}
