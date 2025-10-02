/*
Q20) If the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is isosceles using conditional operator.
*/

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    (a == b || b == c || a == c) 
        ? printf("Triangle is Isosceles\n") 
        : printf("Triangle is not Isosceles\n");

    return 0;
}
