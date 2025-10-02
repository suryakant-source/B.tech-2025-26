/*
Q11) Convert Celsius to Fahrenheit. (HINT: F = C*9/5 + 32)
*/

#include <stdio.h>

int main() {
    float c, f;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = c * 9 / 5 + 32;
    printf("Fahrenheit = %.2f\n", f);
    return 0;
}

