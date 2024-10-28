#include <stdio.h>
// #include <stdlib.h>
#include<string.h>

int main(){
    char str[10] = "Akshat";
    char str1[10];
    strcpy(str1,str);
    printf("Inital string is : %s\n",str);
    printf("Final string is : %s ",str1);   
    return 0;
}