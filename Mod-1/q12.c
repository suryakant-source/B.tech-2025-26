/*
Q12) WAP to enter side of a square and display radius of a circle whose area is same as that of square.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float side, area, radius;
    printf("Enter side of square: ");
    scanf("%f", &side);

    area = side * side;
    radius = sqrt(area / 3.14159);
    printf("Radius of circle = %.2f\n", radius);
    return 0;
}
