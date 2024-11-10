#include <stdio.h>

int main(){
    int table[2][3] = {{0},{1}};
    for(int i= 0;i<2;i++){
        for(int j =0 ; j<3;j++){
            printf("%d ",table[i][j]);

        }
        printf("\n");
    }
    return 0;
}