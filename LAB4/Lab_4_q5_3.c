#include <stdio.h>
#include <string.h>

int main() {

    // working of the program 0 if both strings are identical value <0 if string1 comes before string 2 in dictionary and value >0 if string 2 comes after string1
    char str[] = "Akshat Tripathi";
    char str1[]= "Akshat Tripathz";
    int x;
    x = strcmp(str,str1);  
    printf("%d", x);  
    return 0;
}
