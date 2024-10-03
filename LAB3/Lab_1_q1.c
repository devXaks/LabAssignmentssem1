//program to print prime no
#include <stdio.h>

int main(){
    int num;
    int flag = 0;
    scanf("%d",&num);
    for(int i = 2 ;i <num/2;i++){
        if(num%i==0){
            flag = 1;
            break;
        }

    }
    if(flag == 0){
        printf("%d is prime",num);
    }
    else{
        printf("%d is not prime",num);
        
    }
    return 0;
}