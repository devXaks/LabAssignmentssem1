#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j =0 ;j<n-i;j++){
            printf(" ");
        }
        for(int k = i;k<=2*i-1;k++){
            printf("%d",k);
        }
        for(int l = 2*i-2;l>=i;l--){
            printf("%d",l);
        }

        printf("\n");
    }
    
    return 0;
}