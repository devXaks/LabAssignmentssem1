#include <stdio.h>
int factorial(int);

int main(){
    printf("%d",factorial(5));
    return 0;
}

int factorial(int x){
    if(x == 1|| x == 0){
        return(1);
    }
    return (x * factorial(x-1)); 
}