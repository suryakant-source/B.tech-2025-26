/*
Q32) Convert degree to radian.
Hint: 180° = π radians
*/

#include <stdio.h>
#define PI 3.14159

int main() {
    float deg, rad;
    printf("Enter angle in degrees: ");
    scanf("%f", &deg);

    rad = deg * (PI / 180);
    printf("Radian = %.4f\n", rad);
    return 0;
}
