/*
Q14) Check whether an entered number is an Armstrong number or not.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, sum = 0, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    int temp = n;
    while(temp != 0) {  // count digits
        count++;
        temp /= 10;
    }

    temp = n;
    while(temp != 0) {  // sum of powers of digits
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if(sum == original)
        printf("%d is an Armstrong number\n", original);
    else
        printf("%d is not an Armstrong number\n", original);

    return 0;
}
