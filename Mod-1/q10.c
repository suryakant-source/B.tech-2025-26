/*
Q10) Convert any input temperature in Fahrenheit to Celsius. Hint : C = (F-32)*5/9
*/

#include <stdio.h>

int main() {
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;
    printf("Celsius = %.2f\n", c);
    return 0;
}
