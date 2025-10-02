/*
Q23) Convert a lower case letter to upper case letter.
*/

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a lowercase letter: ");
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z')
        ch = ch - 32;

    printf("Uppercase = %c\n", ch);
    return 0;
}
