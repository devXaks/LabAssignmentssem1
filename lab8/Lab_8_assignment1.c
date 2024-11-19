#include <stdio.h>

// Define the three numbers
#define NUM1 10
#define NUM2 20
#define NUM3 5


// Preprocessor directive to find the smallest number
#if (NUM1 < NUM2) && (NUM1 < NUM3)
    #define SMALLEST NUM1
#elif (NUM2 < NUM1) && (NUM2 < NUM3)
    #define SMALLEST NUM2
#else
    #define SMALLEST NUM3
#endif

int main() {
    printf("The smallest number is: %d\n", SMALLEST);
    return 0;
}
