/*
Q26) Check whether a number is a perfect square or not.
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sqrt_n = sqrt(n);
    if(sqrt_n * sqrt_n == n)
        printf("%d is a perfect square.\n", n);
    else
        printf("%d is NOT a perfect square.\n", n);

    return 0;
}
