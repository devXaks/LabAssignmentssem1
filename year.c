#include <stdio.h>
int days = 361;
int year,day,month;

int main(){
    year = days/360;

    
    month = (days - year*360)/30;
    day = (days - month*30 - year*360);
    printf("%d years %d months %d days",year,month,day);

    
    return 0;
}