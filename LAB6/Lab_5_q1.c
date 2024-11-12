#include <stdio.h>

int main(){
    int num1  = 10;
    int* ptr1;
    int** ptr2;

    ptr1 = &num1;
    
    ptr2 = &ptr1;

    printf("The value at ptr1 (address of num1) is : %p \n", ptr1);
    printf("The value of num1 using *ptr1 is : %d \n", *ptr1);
    printf("The address of num1 is : %p \n", &num1);
    printf("The value at ptr2 (address of ptr1) is : %p \n", ptr2);
    printf("The value of ptr1 using *ptr2 is : %p \n", *ptr2);
    printf("The value of num1 using **ptr2 is : %d \n", **ptr2);

    return 0;
}
