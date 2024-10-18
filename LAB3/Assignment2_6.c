    #include <stdio.h>
        int factorial(int n){
            if (n == 0 || n == 1)
            return 1;
        else
            return n * factorial(n - 1);
    }

    // Function to calculate nCr
    int nCr(int n, int r) {
        return factorial(n) / (factorial(r) * factorial(n - r));
    }

    int main(){

    int n;
    printf("Enter the number of lines : ");
    scanf("%d",&n);
        for(int i =0;i<=n;i++){
            for(int j =0 ;j<n-i;j++){
                printf(" ");
            }
            for(int k = 0;k<=i;k++){
                printf("%d ",nCr(i,k));
            }

            printf("\n");
        }

        
        return 0;
    }