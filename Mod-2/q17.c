/*
Q17) Find the absolute value of a number entered through the keyboard using conditional operator.
*/

#include <stdio.h>

int main() {
    int n, abs;
    printf("Enter a number: ");
    scanf("%d", &n);

    abs = (n < 0) ? -n : n;
    printf("Absolute value = %d\n", abs);
    return 0;
}
