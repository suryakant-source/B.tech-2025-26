/*
Q6) Find Fibonacci series up to an entered number using do-while loop.
*/
#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;
    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    } while(a <= n);
    printf("\n");
    return 0;
}
