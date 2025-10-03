/*
Q23) Check whether a number is a Perfect number or not.
A Perfect number is equal to the sum of its proper divisors (excluding itself).
Example: 6 = 1 + 2 + 3
*/
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        printf("%d is a Perfect number.\n", n);
    else
        printf("%d is NOT a Perfect number.\n", n);

    return 0;
}
s
