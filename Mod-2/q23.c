/*
Q23) If the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is scalene using conditional operator.
*/
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    (a!=b && b!=c && a!=c) 
        ? printf("Triangle is Scalene\n") 
        : printf("Triangle is not Scalene\n");

    return 0;
}
