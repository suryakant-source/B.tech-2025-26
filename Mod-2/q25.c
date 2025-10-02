/*
Q25) Write a program to enter three sides of a triangle and check if the triangle is valid or not. 
If valid, check whether it is isosceles, scalene, equilateral, or right-angled.
*/
#include <stdio.h>

int main() {
    int a, b, c, max, sumSquares;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    (a+b>c && b+c>a && a+c>b) 
        ? ((a==b && b==c) 
            ? printf("Triangle is Equilateral\n") 
            : (a==b || b==c || a==c) 
                ? printf("Triangle is Isosceles\n") 
                : printf("Triangle is Scalene\n")) 
        : printf("Triangle is not valid\n");

    max = (a>b && a>c) ? a : ((b>c) ? b : c);
    sumSquares = (max==a) ? (b*b + c*c) : (max==b ? (a*a + c*c) : (a*a + b*b));
    (max*max == sumSquares) ? printf("Right-angled triangle\n") : printf("");

    return 0;
}
