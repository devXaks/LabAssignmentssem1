#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,det,d;

    scanf("%f %f %f",&a,&b,&c);
    det = pow(b,2) - 4*a*c;
    printf("%d",det);
    if (det > 0){
        d = pow(det,0.5);
        printf("%.2f",(-b+d)/(2*a));

    }
    else if(det==0){
        printf("lol");
    }
    else{
        printf("pattagobhi");
    }


}