#include <stdio.h>

#define SIZE 3

void transposeMatrix(int (*matrix)[SIZE], int (*transposed)[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int (*matrix)[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[SIZE][SIZE];
    int transposed[SIZE][SIZE];

    printf("Enter elements of the 3x3 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transposeMatrix(matrix, transposed);

    printf("Original Matrix:\n");
    printMatrix(matrix);
    
    printf("Transposed Matrix:\n");
    printMatrix(transposed);

    return 0;
}