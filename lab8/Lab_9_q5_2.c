#include <stdio.h>

void printCurrentFile() {
    printf("This code is in file: %s\n", __FILE__);
}

int main() {
    printCurrentFile();
    return 0;
}
