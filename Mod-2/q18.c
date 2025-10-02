/*
Q18) Given the coordinates (x, y) of a center of a circle and its radius, 
write a program which will determine whether a point lies inside the circle, 
on the circle or outside the circle.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float cx, cy, r, x, y, dist;
    printf("Enter circle center (x y) and radius: ");
    scanf("%f %f %f", &cx, &cy, &r);
    printf("Enter point coordinates (x y): ");
    scanf("%f %f", &x, &y);

    dist = sqrt(pow(x - cx, 2) + pow(y - cy, 2));

    if (dist < r)
        printf("Point lies inside the circle\n");
    else if (dist == r)
        printf("Point lies on the circle\n");
    else
        printf("Point lies outside the circle\n");

    return 0;
}
