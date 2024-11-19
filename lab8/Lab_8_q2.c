#include <stdio.h>
#define PI 3.14159
#define AREA_OF_CIRCLE(radius) (PI * (radius) * (radius))

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = AREA_OF_CIRCLE(radius);
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
