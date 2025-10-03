/*
Q17) Display the decimal equivalent of an entered binary number.
*/
#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    int decimal = 0, base = 1, digit;
    while(binary > 0) {
        digit = binary % 10;
        decimal += digit * base;
        base *= 2;
        binary /= 10;
    }

    printf("Decimal: %d\n", decimal);
    return 0;
}
