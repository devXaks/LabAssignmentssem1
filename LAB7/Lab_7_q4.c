#include <stdio.h>
int sod(int num1){
    int k,d;
    k = num1%10;
    d = num1/10;
    if(d == 0){
        return k;
    }
    return k+sod(d);


}

int main(){

    printf("%d",sod(5050));
    
    
    return 0;
}