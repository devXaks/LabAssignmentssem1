#include <stdio.h>
#define greatestofthree(num1,num2,num3) (num1>num2 && num1>num3 ? num1 : num2>num1 && num2>num3 ? num2 :num3)

int main() {
   printf("Greatest no is %d",greatestofthree(110,40,30));

    return 0;
}
