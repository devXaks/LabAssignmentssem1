#include <stdio.h>

int main(){
    long long bnry_num=0;
    int decimal_num;
    printf("Input the number in decimal number system");
    scanf("%d",&decimal_num);
    while(decimal_num){
        bnry_num = bnry_num*10 +decimal_num%2;
        decimal_num/=2;

    }
    printf("%d",bnry_num);
    return 0;
}