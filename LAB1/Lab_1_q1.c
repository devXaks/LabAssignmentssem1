// WAP to print results of different arithmetic operators

#include <stdio.h>
int main()
{
    int var1;
    int var2;
    char operation;
    printf("Enter first number: ");
    scanf("%d", &var1);
    printf("Enter second number: ");
    scanf("%d", &var2);
    printf("Enter the operation to perform : ");
    // operation = "+";
    scanf(" %c", &operation);
    // operation = '+';
    switch (operation)
    {
    case '+':
        printf("The output of %d %c %d is : %d", var1, operation,var2, var1 + var2);
        break;

    case '-':
        printf("The output of %d %c %d is : %d", var1, operation,var2, var1 - var2);
        break;

    case '*':
        printf("The output of %d %c %d is : %d", var1, operation,var2, var1 * var2);
        break;

    case '/':
        printf("The output of %d %c %d is : %d", var1, operation,var2, var1 / var2);
        break;
    case '%':
        printf("The output of %d %c %d is : %d", var1, operation,var2, var1 % var2);
        break;
    
    }
    
    
}