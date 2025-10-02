/*
Q31) WAP to enter a four digit number and compute sum of the digit.
Enter a four digit number 7280 → Sum of digits = 17
*/

#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
