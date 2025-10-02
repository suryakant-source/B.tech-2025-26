/*
Q14) Calculate the gross salary of an employee by entering the basic salary. 
DA is 42%, HRA is 30% of the basic salary and a fixed other allowance (OA) of Rs. 2000. 
(Gross salary = Basic + DA + HRA + OA)
*/

#include <stdio.h>

int main() {
    float basic, da, hra, gross;
    int oa = 2000;
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    da = 0.42 * basic;
    hra = 0.30 * basic;
    gross = basic + da + hra + oa;

    printf("Gross Salary = %.2f\n", gross);
    return 0;
}
