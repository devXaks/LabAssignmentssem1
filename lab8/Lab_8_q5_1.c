#include <stdio.h>

void printCompilationDate() {
    printf("This code was compiled on: %s\n", __DATE__);
}

int main() {
    printCompilationDate();
    return 0;
}
