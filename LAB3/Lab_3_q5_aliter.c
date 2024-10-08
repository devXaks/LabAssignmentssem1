#include <stdio.h>

int main(){
    int numarr[10];
    int decimal_num;
    int cnt = 0;
    int flag = 0 ;
    scanf("%d",&decimal_num);
    for(int i = 0;i<10;i++){
        numarr[i] = 0;
    }
    while (decimal_num)
    {
        numarr[9-cnt]= decimal_num%8;
        cnt++;
        decimal_num/=8;
    }
        for(int j = 0;j<10;j++){
        if(numarr[j]!=0){
            flag=1;}
            if (flag==1){
        printf("%d",numarr[j]);
            }
    }
    
    
    return 0;
}