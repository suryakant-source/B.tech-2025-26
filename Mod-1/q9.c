/*
Q9) Enter the principal, time, and rate of interest. Calculate the simple interest.
*/

#include <stdio.h>

int main() {
    float p, t, r, si;
    printf("Enter principal, time, rate: ");
    scanf("%f %f %f", &p, &t, &r);

    si = (p * t * r) / 100;
    printf("Simple Interest = %.2f\n", si);
    return 0;
}
