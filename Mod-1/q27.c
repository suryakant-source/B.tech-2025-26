/*
Q27) Find the volume of a cylinder.
*/

#include <stdio.h>
#define PI 3.14159

int main() {
    float r, h, volume;
    printf("Enter radius and height: ");
    scanf("%f %f", &r, &h);

    volume = PI * r * r * h;
    printf("Volume of cylinder = %.2f\n", volume);
    return 0;
}
