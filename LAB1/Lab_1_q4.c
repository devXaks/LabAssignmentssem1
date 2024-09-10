#include<stdio.h>
int main(){
    int marks[5] = {80,85,70,75,60};
    int sm = 0;
    float avg = 0;
    for(int i = 0;i<5;i++){
        sm += marks[i];
        
    }
    avg = sm/5;
    printf("The average is %f",avg);

    
}