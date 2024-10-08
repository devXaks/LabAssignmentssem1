#include <stdio.h>
#include<math.h>

int main(){
    long long bnry_num=0;
    int decimal_num;
    int decimal_num_cpy;

    int cnt=0;
    printf("Input the number in decimal number system");
    scanf("%d",&decimal_num);
    decimal_num_cpy = decimal_num;
    while (decimal_num_cpy)
    {
        cnt++;
        decimal_num_cpy/=2;

        }
        // printf("%d\n",cnt);
    


    while(decimal_num){
        bnry_num = bnry_num*pow(10,cnt) +decimal_num%2;
        decimal_num/=2;
        cnt--;
                // printf("%d\n",cnt);


    }
    printf("%d",bnry_num);
    return 0;
}