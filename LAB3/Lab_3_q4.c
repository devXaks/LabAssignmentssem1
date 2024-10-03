#include <stdio.h>

int main(){
    int num,reverse=0,temp;
    printf("Enter the number :");
    scanf("%d",&num);
    temp = num;
    while (num)
    {
        reverse = reverse *10 + num%10;
        num/=10;

    }
    if(temp == reverse){
        printf("%d is a palindrome number",temp);
        
    }
    else{
        printf("%d is not a palindrome number",temp);


    }
    

    return 0;
}