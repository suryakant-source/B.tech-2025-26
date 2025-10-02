/*
Q34) Enter polar coordinates (r , θ) of a point and convert them into Cartesian coordinates (x,y).
Hint: x = r cos(θ), y = r sin(θ)
*/

#include <stdio.h>
#include <math.h>

int main() {
    float r, theta, x, y;
    printf("Enter r and θ (in radians): ");
    scanf("%f %f", &r, &theta);

    x = r * cos(theta);
    y = r * sin(theta);

    printf("Cartesian Coordinates: (%.2f, %.2f)\n", x, y);
    return 0;
}
