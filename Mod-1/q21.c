/*
Q21) Calculate the total bill to be paid by a customer entering the price of 3 products and their
quantities.
*/

#include <stdio.h>

int main() {
    float p1, p2, p3, total;
    int q1, q2, q3;

    printf("Enter price and quantity of product 1: ");
    scanf("%f %d", &p1, &q1);
    printf("Enter price and quantity of product 2: ");
    scanf("%f %d", &p2, &q2);
    printf("Enter price and quantity of product 3: ");
    scanf("%f %d", &p3, &q3);

    total = p1*q1 + p2*q2 + p3*q3;
    printf("Total Bill = %.2f\n", total);
    return 0;
}
