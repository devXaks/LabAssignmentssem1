#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x, y;
    printf("Enter the leading coefficient of the quadratic equation: ");
    scanf("%f", &a);
    printf("Enter the coefficient of the first degree term: ");
    scanf("%f", &b);
    printf("Enter the constant term: ");
    scanf("%f", &c);

    float discriminant = pow(b, 2) - 4 * a * c;
    
    if (discriminant >= 0) {
        printf("Roots exist:\n");
        x = (-b + sqrt(discriminant)) / (2 * a);
        y = (-b - sqrt(discriminant)) / (2 * a);
        printf("%.2f\n", x);
        printf("%.2f\n", y);
    } else {
        printf("Roots do not exist.\n");
    }
    
    return 0;
}
