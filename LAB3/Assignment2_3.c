#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        for(int j =0 ;j<n-i;j++){
            printf(" ");
        }
        for(int k = 1;k<=i;k++){
            printf("%d ",i);
        }

        printf("\n");
    }
    
    return 0;
}