/*
Q16) Input some quantity weight in grams and calculate the corresponding weight in Kilograms and
remaining grams. (Example- Input weight: 1500 grams; Output: 1 KG 500 grams)
*/

#include <stdio.h>

int main() {
    int grams, kg, rem;
    printf("Enter weight in grams: ");
    scanf("%d", &grams);

    kg = grams / 1000;
    rem = grams % 1000;

    printf("%d KG %d grams\n", kg, rem);
    return 0;
}
