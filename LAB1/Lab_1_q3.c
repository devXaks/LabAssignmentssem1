//Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic
//salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross
//salary

#include<stdio.h>
int main(){
    float basicSalary;
    float dearnessAllowance;
    float houseRentAllowance;
    float grossSalary;
    printf("Enter the basic salary: ");
    scanf("%f",&basicSalary);
    dearnessAllowance = basicSalary*0.4;
    houseRentAllowance = basicSalary*0.2;
    grossSalary = basicSalary+dearnessAllowance+houseRentAllowance;
    printf("The gross salary is %f",grossSalary);

    return 0;
}