#include <stdio.h>

int main(){
    int n=5;
    for(int i =1;i<=n;i++){
        for(int j =1 ;j<=i;j++){
            printf("*");


    }
            printf("\n");

    }

        for(int k =n-1;k>=1;k--){
        for(int l =n-1 ;l>=n-k;l--){
            printf("*");


    }
            printf("\n");

    }
    
    
    return 0;
}