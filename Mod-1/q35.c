/*
Q35) WAP to enter Cartesian coordinates (x,y) of a point and convert them into polar coordinates (r , θ).
Hint: r = √(x^2 + y^2), θ = tan−1(y/x)
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x, y, r, theta;
    printf("Enter Cartesian coordinates (x y): ");
    scanf("%f %f", &x, &y);

    r = sqrt(x*x + y*y);
    theta = atan2(y, x); // atan2 handles all quadrants

    printf("Polar Coordinates: r = %.2f, θ = %.2f radians\n", r, theta);
    return 0;
}
