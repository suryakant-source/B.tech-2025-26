/*
Q26) Enter the total price of some food order by a customer in a restaurant. The restaurant charges a
12% GST on total amount. If the total amount exceeds RS 1000, the restaurant offers a 5%
discount. Otherwise no discount is provided. Use conditional operator for discount calculation.
Print the final amount payable by the customer.
*/

#include <stdio.h>

int main() {
    float price, final;
    printf("Enter total price: ");
    scanf("%f", &price);

    final = price + (price * 0.12);
    final = (final > 1000) ? (final - (final * 0.05)) : final;

    printf("Final Amount = %.2f\n", final);
    return 0;
}
