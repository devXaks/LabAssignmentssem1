#include <stdio.h>

int main() {
    float marks1, marks2, marks3, marks4, marks5;
    float total, percentage;
    char grade;

    printf("Enter marks for 5 subjects seprated by spaces: ");
    scanf("%f %f %f %f %f",&marks1,&marks2,&marks3,&marks4,&marks5);
    

    total = marks1 + marks2 + marks3 + marks4 + marks5;
    percentage = (total / 500.0) * 100.0;

    printf("Percentage: %.2f%%\n", percentage);


    if (percentage >= 90) {
        grade = 'A';
    } 
    else if (percentage >= 80) {
        grade = 'B';
    } 
    else if (percentage >= 70) {
        grade = 'C';
    } 
    else if (percentage >= 60) {
        grade = 'D';
    } 
    else if (percentage >= 40) {
        grade = 'E';
    } 
    else {
        grade = 'F'; 
    }

    printf("Grade: %c\n", grade);

    return 0;
}
