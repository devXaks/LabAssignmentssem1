#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter the value of num: ");
    scanf("%d", &num);

    for (int i = 2; i <= num; i += 2) {
        if (i % 3 == 0 && i % 5 == 0) {
            sum += i;
        }
    }

    printf("The sum of numbers divisible by 2, 3, and 5 up to %d is: %d\num", num, sum);

    return 0;
}
