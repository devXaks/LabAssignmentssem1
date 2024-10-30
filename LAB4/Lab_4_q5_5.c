#include <stdio.h>
// #include <stdlib.h>
#include<string.h>

int main(){
    char str[10] = "Akshat";
    char str1[10];
    strncpy(str1,str,3);
    printf("Inital string is : %s\n",str);
    printf("Final string is : %s ",str1);   
    
    return 0;
}