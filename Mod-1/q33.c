/*
Q33) Convert radian to degree.
Hint: π radians = 180°
*/

#include <stdio.h>
#define PI 3.14159

int main() {
    float rad, deg;
    printf("Enter angle in radians: ");
    scanf("%f", &rad);

    deg = rad * (180 / PI);
    printf("Degree = %.2f\n", deg);
    return 0;
}
