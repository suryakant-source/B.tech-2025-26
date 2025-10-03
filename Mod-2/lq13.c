/*
Q13) Check whether an entered number is a palindrome number or not.
*/
#include <stdio.h>

int main() {
    int n, original, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;

    while(n != 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if(original == rev)
        printf("%d is a Palindrome number\n", original);
    else
        printf("%d is not a Palindrome number\n", original);

    return 0;
}
