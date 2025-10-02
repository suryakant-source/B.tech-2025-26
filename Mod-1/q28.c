/*
Q28) WAP to find the volume of a sphere.
*/

#include <stdio.h>
#define PI 3.14159

int main() {
    float r, volume;
    printf("Enter radius: ");
    scanf("%f", &r);

    volume = (4.0/3.0) * PI * r * r * r;
    printf("Volume of sphere = %.2f\n", volume);
    return 0;
}
