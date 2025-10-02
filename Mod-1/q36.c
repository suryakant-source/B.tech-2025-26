/*
Q36) WAP to enter co-ordinates of two points of a square, then calculate area and perimeter of the square.
Hint:
Enter x1=0, y1=0
Enter x2=3, y2=4
Side = 5 → AREA = 25, PERIMETER = 20
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, side, area, peri;
    printf("Enter x1 y1: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter x2 y2: ");
    scanf("%f %f", &x2, &y2);

    side = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    area = side * side;
    peri = 4 * side;

    printf("Side = %.2f\n", side);
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", peri);
    return 0;
}
