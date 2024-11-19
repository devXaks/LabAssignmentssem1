#include <stdio.h>
#include <math.h>

struct ComplexNumber {
    double real;
    double imaginary;
};

struct ComplexNumber add(struct ComplexNumber a, struct ComplexNumber b) {
    struct ComplexNumber result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

struct ComplexNumber subtract(struct ComplexNumber a, struct ComplexNumber b) {
    struct ComplexNumber result;
    result.real = a.real - b.real;
    result.imaginary = a.imaginary - b.imaginary;
    return result;
}

struct ComplexNumber multiply(struct ComplexNumber a, struct ComplexNumber b) {
    struct ComplexNumber result;
    result.real = a.real * b.real - a.imaginary * b.imaginary;
    result.imaginary = a.real * b.imaginary + a.imaginary * b.real;
    return result;
}

double modulus(struct ComplexNumber a) {
    return sqrt(a.real * a.real + a.imaginary * a.imaginary);
}

void printComplexNumber(struct ComplexNumber c) {
    printf("%.2f + %.2fi\n", c.real, c.imaginary);
}

int main() {
    struct ComplexNumber c1 = {3.0, 2.0};
    struct ComplexNumber c2 = {1.0, 7.0};

    struct ComplexNumber sum = add(c1, c2);
    struct ComplexNumber diff = subtract(c1, c2);
    struct ComplexNumber prod = multiply(c1, c2);
    double mod_c1 = modulus(c1);

    printf("Addition: ");
    printComplexNumber(sum);
    printf("Subtraction: ");
    printComplexNumber(diff);
    printf("Multiplication: ");
    printComplexNumber(prod);
    printf("Modulus of c1: %.2f\n", mod_c1);

    return 0;
}