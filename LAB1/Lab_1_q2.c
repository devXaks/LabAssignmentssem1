//Program to swap integers without using temporary variable
#include <stdio.h>  

int main() {
    printf("Input two integers to be swapped");
    int var1;
    int var2;
    scanf("%d %d",&var1,&var2);
    printf("Initial state of variables: var1: %d ; var2: %d",var1,var2);
    var1 = var1+ var2;
    var2= var1-var2;
    var1= var1-var2;
    printf("State of variable after program execution is var1: %d ; var2: %d",var1,var2);
return 0;
}