/*
Q6) Check whether any entered number is positive, negative or zero using nested if-else statement.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 0) {
        if (n == 0)
            printf("The number is Zero\n");
        else
            printf("The number is Positive\n");
    } else {
        printf("The number is Negative\n");
    }

    return 0;
}
