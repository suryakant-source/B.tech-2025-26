/*
Q2) WAP to enter two numbers and their sum, difference, multiplication, division and modulus and
display the output in the following format
Enter two numbers
50 10
50 + 10 = 60
50 – 10 = 40
50 * 10 = 500
50 / 10 = 5
50 % 10 = 0
*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    if (b != 0) {
        printf("%d / %d = %d\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division or modulus by zero not allowed\n");
    }

    return 0;
}
