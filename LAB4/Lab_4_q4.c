#include <stdio.h>
void count_occurrences(int arr[], int size) {
    int counts[10] = {0};
    int unique[10];
    int unique_count = 0;

    for (int i = 0; i < size; i++) {
        int found = 0;        
        for (int j = 0; j < unique_count; j++) {
            if (arr[i] == unique[j]) {
                counts[j]++;
                found = 1;
                break;
            }
        }
        if (!found) {
            unique[unique_count] = arr[i];
            counts[unique_count]++;
            unique_count++;
        }
    }

    printf("Occurrences of each integer:\n");
    for (int i = 0; i < unique_count; i++) {
        printf("%d: %d\n", unique[i], counts[i]);
    }
}

int main() {
    int array[10] = {1, 2, 3, 4, 5, 3, 6, 3, 7, 8};

    count_occurrences(array, 10);

    return 0;
}