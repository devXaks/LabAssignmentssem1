#include <stdio.h>
int sum(int,int);

int main(){
    printf("%d",sum(5,6));
    
    return 0;
}
int sum(int x ,int y){
    int sum1;
    sum1 = x+y;
    return sum1;
}