/*
Q2) Print the multiplication table of any entered number.
*/
#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= 10) {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    return 0;
}
