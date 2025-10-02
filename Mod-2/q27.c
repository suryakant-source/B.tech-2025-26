/*
Q27) Write a program to enter a character and check whether it is a vowel or consonant.
*/
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    ((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') 
        ? printf("Vowel\n") 
        : ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) 
            ? printf("Consonant\n") 
            : printf("Not an alphabet\n"));

    return 0;
}
