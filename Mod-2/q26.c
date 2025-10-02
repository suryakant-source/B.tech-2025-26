/*
Q26) Write a program to enter a character and determine whether the character is 
lowercase alphabet, uppercase alphabet, digit, or special character.
*/
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    (ch>='a' && ch<='z') ? printf("Lower case alphabet\n") :
    (ch>='A' && ch<='Z') ? printf("Upper case alphabet\n") :
    (ch>='0' && ch<='9') ? printf("Digit\n") : printf("Special character\n");

    return 0;
}
