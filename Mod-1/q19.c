/*
Q19) Calculate area of a triangle by Herron’s method for any entered values of a, b and c. 
Hint: A = √s(s − a)(s − b)(s − c)
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, s, area;
    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area = %.2f\n", area);
    return 0;
}
