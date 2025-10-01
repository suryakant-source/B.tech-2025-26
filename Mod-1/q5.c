/*
Q5) Enter the CGPA obtained by a student and find the equivalent percentage of marks. 
(Hint : (CGPA - 0.5) × 10)
*/

#include <stdio.h>

int main() {
    float cgpa, percent;
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);
    percent = (cgpa - 0.5) * 10;
    printf("Percentage = %.2f%%\n", percent);
    return 0;
}
