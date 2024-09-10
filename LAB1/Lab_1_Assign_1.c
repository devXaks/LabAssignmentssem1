#include<stdio.h>
void main(){
    int num;
    int sm = 0;
    printf("Enter a 5 digit number : ");
    scanf("%d",&num);
    while (num)
    {
        sm += num%10;
        num/=10;
    }
    printf("The sum of digits is %d :",sm);
    
}