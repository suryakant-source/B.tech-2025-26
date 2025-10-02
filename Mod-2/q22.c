/*
Q22) If the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is right-angled using conditional operator.
*/
#include <stdio.h>

int main() {
    int a, b, c, max, sumSquares;
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a>b && a>c) ? a : ((b>c) ? b : c);
    sumSquares = (max==a) ? (b*b + c*c) : (max==b ? (a*a + c*c) : (a*a + b*b));
    
    (max*max == sumSquares) 
        ? printf("Triangle is Right-angled\n") 
        : printf("Triangle is not Right-angled\n");

    return 0;
}
