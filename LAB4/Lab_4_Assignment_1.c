#include <stdio.h>

int main() {
    int size;
    int positive_count = 0, negative_count = 0, zero_count = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }

    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Zeros: %d\n", zero_count);

    return 0;
}