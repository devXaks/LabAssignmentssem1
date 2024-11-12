#include <stdio.h>

int sum_of_two_numbers(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = sum_of_two_numbers(a, b);

    printf("The sum is: %d\n", result);

    return 0;
}