/*
Q12) Compute the real roots of a quadratic equation ax^2 + bx + c = 0 (given a, b and c) 
for the following conditions:
i) No solution, if both a and b are zero.
ii) Only one root if determinant (b^2 - 4ac)=0
iii) No real roots if b^2 - 4ac < 0
iv) Otherwise there are 2 real roots
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;
    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0 && b == 0) {
        printf("No solution\n");
    } else {
        d = b*b - 4*a*c;
        if (d == 0) {
            r1 = -b / (2*a);
            printf("One root: %.2f\n", r1);
        } else if (d < 0) {
            printf("No real roots\n");
        } else {
            r1 = (-b + sqrt(d)) / (2*a);
            r2 = (-b - sqrt(d)) / (2*a);
            printf("Roots: %.2f and %.2f\n", r1, r2);
        }
    }

    return 0;
}
