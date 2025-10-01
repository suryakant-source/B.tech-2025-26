/*
Q3) Enter the length and breadth of a rectangle and find the area.
*/

#include <stdio.h>

int main() {
    float l, b, area;
    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);
    area = l * b;
    printf("Area = %.2f\n", area);
    return 0;
}
