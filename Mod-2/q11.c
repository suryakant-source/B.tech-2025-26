/*
Q11) Enter the cost price and selling price of a product and check profit or loss. 
Also, print the percentage of loss or profit for the product.
*/

#include <stdio.h>

int main() {
    float cp, sp, profit, loss;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);

    if (sp > cp) {
        profit = sp - cp;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", (profit/cp)*100);
    } else if (cp > sp) {
        loss = cp - sp;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", (loss/cp)*100);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
