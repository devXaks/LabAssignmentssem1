#include <stdio.h>

#define MAX 10

void initMat(int A[MAX][MAX], int B[MAX][MAX], int rowsA, int colsA, int rowsB, int colsB) {
    printf("Enter elements of matrix A (%dx%d):\n", rowsA, colsA);
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Enter elements of matrix B (%dx%d):\n", rowsB, colsB);
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &B[i][j]);
        }
    }
}

void printMat(int mat[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void mulMat(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int rowsA, int colsA, int rowsB, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
    int rowsA, colsA, rowsB, colsB;

    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &rowsA, &colsA);
    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    initMat(A, B, rowsA, colsA, rowsB, colsB);
    
    mulMat(A, B, C, rowsA, colsA, rowsB, colsB);
    
    printf("Matrix A:\n");
    printMat(A, rowsA, colsA);
    
    printf("Matrix B:\n");
    printMat(B, rowsB, colsB);
    
    printf("Resultant Matrix C (A * B):\n");
    printMat(C, rowsA, colsB);

    return 0;
}