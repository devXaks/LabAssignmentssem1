#include <stdio.h>

int main(){
    int n=5;
    for(int i =0;i<=n;i++){
        for(int j =0 ;j<n-i;j++){
            printf(" ");
        }
        for(int k = i;k>=0;k--){
            printf("%d",k);
        }
        for(int l = 1;l<=i;l++){
            printf("%d",l);
        }
        

        printf("\n");
    }
    
    return 0;
}