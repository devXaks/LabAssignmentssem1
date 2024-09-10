#include<stdio.h>
void main(){
    int amt;
    int coin10,coin50,coin100;
    printf("Enter the amount : ");
    scanf("%d",&amt);
    if(amt%100 != 0){
        printf("Incorrect value entered, program terminating");

    }
    else{
        coin10= amt/10;
        coin50= amt/50;
        coin100= amt/100;

        printf("The number of 10 notes to be given is %d\n",coin10);
        printf("The number of 50 notes to be given is %d\n",coin50);
        printf("The number of 100 notes to be given is %d",coin100);


        
    }
}