/*
Q22) Find ascii code of an entered character.
*/

#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("ASCII code of %c = %d\n", ch, ch);
    return 0;
}
