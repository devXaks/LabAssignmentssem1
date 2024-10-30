#include <stdio.h>
#include <string.h>

int main(){
    //strcmp 0 --> str1 == str2;
    //1 str1>str2;
    //-1 str1<str2;
    char s1[10] = "AKSHAT";
    char s2[10] = "akshat";
    printf("%d",strcmpi(s1,s2));

    return 0;
}