#include <stdio.h>

int main() {
    int n, num1 = 0, num2 = 1, temp;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        printf("%d ", num1); 
        temp = num1 + num2; 
        num1 = num2;            
        num2 = temp;      
    }

    return 0;
}
