/*
Q13) Calculate the income tax payable by a person by entering the total taxable income as per the
below slabs:
0–3,00,000 : 0%
3,00,001–7,00,000 : 5%
7,00,001–10,00,000 : 10%
10,00,001–12,00,000 : 15%
12,00,001–15,00,000 : 20%
>15,00,000 : 30%
*/

#include <stdio.h>

int main() {
    float income, tax = 0;
    printf("Enter taxable income: ");
    scanf("%f", &income);

    if (income <= 300000)
        tax = 0;
    else if (income <= 700000)
        tax = 0.05 * (income - 300000);
    else if (income <= 1000000)
        tax = 0.05 * 400000 + 0.10 * (income - 700000);
    else if (income <= 1200000)
        tax = 0.05 * 400000 + 0.10 * 300000 + 0.15 * (income - 1000000);
    else if (income <= 1500000)
        tax = 0.05 * 400000 + 0.10 * 300000 + 0.15 * 200000 + 0.20 * (income - 1200000);
    else
        tax = 0.05 * 400000 + 0.10 * 300000 + 0.15 * 200000 + 0.20 * 300000 + 0.30 * (income - 1500000);

    printf("Income Tax Payable = %.2f\n", tax);
    return 0;
}
