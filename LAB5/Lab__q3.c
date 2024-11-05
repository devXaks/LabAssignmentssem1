#include <stdio.h>

int main(){
    int num1 = 10;
    int num2 = 20;

    printf("The value of num1 before execution is : %d\n",num1); 
    printf("The value of num2 before execution is : %d\n",num2); 
    int temp;
    int* ptr1;
    int* ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("The value of num1 after execution is : %d\n",num1); 
    printf("The value of num2 after execution is : %d\n",num2); 


    return 0;
}