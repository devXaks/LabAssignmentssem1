#include <stdio.h>

void printNumberInWords(int n) {
    char *single_digits[] = { "zero", "one", "two", "three", "four", 
                              "five", "six", "seven", "eight", "nine" };
    char *two_digits[] = { "", "ten", "eleven", "twelve", "thirteen", "fourteen", 
                           "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
    char *tens_multiple[] = { "", "", "twenty", "thirty", "forty", "fifty", 
                              "sixty", "seventy", "eighty", "ninety" };
    char *tens_power[] = { "hundred", "thousand" };

    if (n == 0) {
        printf("zero");
        return;
    }

    // For numbers in thousands
    if (n / 1000 > 0) {
        printf("%s thousand ", single_digits[n / 1000]);
        n %= 1000;
    }

    // For numbers in hundreds
    if (n / 100 > 0) {
        printf("%s hundred ", single_digits[n / 100]);
        n %= 100;
    }

    if (n > 0) {
        if (n < 10) {
            printf("%s", single_digits[n]);
        } else if (n < 20) {
            printf("%s", two_digits[n - 10]);
        } else {
            printf("%s", tens_multiple[n / 10]);
            if (n % 10 > 0) {
                printf("-%s", single_digits[n % 10]);
            }
        }
    }
}

int main() {
    int number;

    scanf("%d", &number);

    printf("Number in words: ");
    printNumberInWords(number);
    printf("\n");

    return 0;
}
