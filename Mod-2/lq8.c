/*
Q8) Find the factorial of any user entered number using for loop.
*/
#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial: %lld\n", fact);
    return 0;
}
