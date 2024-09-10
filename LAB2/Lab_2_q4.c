#include<stdio.h>
int main(){
    float s1,s2,s3;
    printf("Enter the sides of triangle separated by spaces");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1<s2+s3 && s2 <s1+s3 && s3<s1+s2){
        printf("The sides are suitable for a triangle\n");
    }
    else{
        printf("The sides are not suitable for a triangle\n");
    }
    return 0;
}