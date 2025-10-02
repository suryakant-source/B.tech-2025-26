/*
Q28) Write a program to enter a character and if it is an alphabet, change its case.
*/
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    (ch>='a' && ch<='z') ? printf("Upper case: %c\n", ch-32) :
    (ch>='A' && ch<='Z') ? printf("Lower case: %c\n", ch+32) :
    printf("Not an alphabet\n");

    return 0;
}
