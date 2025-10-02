/*
Q30) WAP to enter a three digit number and compute its reverse.
Hint: Enter a number 728 → Reverse = 827
*/

#include <stdio.h>

int main() {
    int num, rev = 0, digit;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    printf("Reverse = %d\n", rev);
    return 0;
}
