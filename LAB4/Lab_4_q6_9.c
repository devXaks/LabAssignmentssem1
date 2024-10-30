#include <stdio.h>
#include <string.h>

int main(){
    char s1[10]= "Akshat a";
    char* p1 = strrchr(s1,'a');
    printf("Memory location of fist character is %x\n",s1);
    printf("Memory location of fist occureance of the character a is %x",p1);
    return 0;
}