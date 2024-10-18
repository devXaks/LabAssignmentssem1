#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float numbers[n];

    printf("Enter the numbers: \n");
    for (i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / n;

    printf("The average is: %.2f\n", average);

    return 0;
}
