/*
Q8) Find the sum of the individual digits of any entered three-digit positive number.
*/

#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    sum += num % 10;
    num /= 10;
    sum += num % 10;
    num /= 10;
    sum += num;

    printf("Sum of digits = %d\n", sum);
    return 0;
}
