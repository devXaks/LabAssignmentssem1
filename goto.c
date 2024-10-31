#include <stdio.h>

int main(){
    // forward jump
    int x = 10,y=20;
    if(x==10)
    goto label;
    printf("Jumped me");

    label : 
    printf("This is forward jump");
    return 0;
}