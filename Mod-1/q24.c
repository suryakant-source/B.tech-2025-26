/*
Q24) Cconvert a lower case letter to upper case letter.
(Note: This is same as Q23, repeating for assignment.)
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
