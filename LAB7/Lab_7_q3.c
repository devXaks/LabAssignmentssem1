#include <stdio.h>

int factorial(int num1){
    if(num1 == 1|| num1 == 0){
        return 1;
    }
    return num1*factorial(num1-1);

}

int main(){

    printf("%d",factorial(5));

    return 0;
}