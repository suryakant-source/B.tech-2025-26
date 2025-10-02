/*
Q15) Convert an input total number of days into corresponding number of years, months and remaining
days. Consider 1 month=30 days.
(Example- Input days: 450 days; Output: 1 year, 2 months, 25 days)
*/

#include <stdio.h>

int main() {
    int days, years, months, rem;
    printf("Enter total days: ");
    scanf("%d", &days);

    years = days / 365;
    days %= 365;
    months = days / 30;
    rem = days % 30;

    printf("%d year(s), %d month(s), %d day(s)\n", years, months, rem);
    return 0;
}
