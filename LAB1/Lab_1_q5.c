#include <stdio.h>

int main() {
    float temp_fahrenheit;
    float temp_celsius;
    
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &temp_fahrenheit);
    
    temp_celsius = (temp_fahrenheit - 32) * 5 / 9;
    
    printf("The temperature in Celsius is: %.2f\n", temp_celsius);
    
    return 0;
}
