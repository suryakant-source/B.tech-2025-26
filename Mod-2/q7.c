/*
Q7) Check whether two entered numbers are equal or the first number is greater than
the second number or the second number is greater than the first number using nested if-else statement.
*/

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a == b)
        printf("Both numbers are equal\n");
    else {
        if (a > b)
            printf("First number %d is greater\n", a);
        else
            printf("Second number %d is greater\n", b);
    }

    return 0;
}
