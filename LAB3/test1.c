#include <stdio.h>
    int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        return n * factorial(n - 1);
    }
}

int main(){
    int num  = 5;


    for (int i = 0;i<=num;i++){
        for(int j  = num; j>=num-i;j--){
            printf(" ");
        }
        for(int k =0;k<=i;k++){
            printf("%d ",i/(factorial(k)*factorial(i-k)));
        }
        printf("\n");


    }
    return 0;
}