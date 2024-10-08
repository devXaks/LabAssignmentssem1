#include <stdio.h>

int main(){
    int num = 4;
    for(int i = 1;i<num+1;i++){
        for(int j =0;j<num-i;j++){
            printf(" ");
        }
        for(int k = 0;k<=i;k+=2){
            printf("*");
        }
2    }
    return 0;
}