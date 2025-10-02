/*
Q19) If the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is valid or not using conditional operator.
*/

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    (a + b > c && a + c > b && b + c > a) 
        ? printf("Valid Triangle\n") 
        : printf("Invalid Triangle\n");

    return 0;
}
