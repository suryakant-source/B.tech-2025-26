/*
Q15) Enter the total purchase amount for a customer and calculate the amount payable by the customer 
after discount, if a shopping mall announced the following discounts:
<1000 : No discount
1000–3000 : 5%
3001–6000 : 7%
6001–10000 : 10%
Above 10000 : Flat Rs. 2000 off
*/

#include <stdio.h>

int main() {
    float amt, final;
    printf("Enter purchase amount: ");
    scanf("%f", &amt);

    if (amt < 1000)
        final = amt;
    else if (amt <= 3000)
        final = amt - (0.05 * amt);
    else if (amt <= 6000)
        final = amt - (0.07 * amt);
    else if (amt <= 10000)
        final = amt - (0.10 * amt);
    else
        final = amt - 2000;

    printf("Final Amount Payable = %.2f\n", final);
    return 0;
}
