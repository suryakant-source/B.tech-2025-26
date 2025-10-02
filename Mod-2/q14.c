/*
Q14) Calculate the age of a person, given date of birth (DOB) and current date (CD). 
A date is represented as three integers (say dd, mm, and yyyy). 
The result to be printed as YY years, MM months, DD days. 
Consider a month consists of 30 days.
Example: Input DOB: 29/10/1980, CD: 27/8/2011
Output: Age: 30 years 9 Months and 28 days
*/

#include <stdio.h>

int main() {
    int d1, m1, y1; // DOB
    int d2, m2, y2; // Current Date
    int dd, mm, yy;

    printf("Enter Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &d1, &m1, &y1);

    printf("Enter Current Date (dd mm yyyy): ");
    scanf("%d %d %d", &d2, &m2, &y2);

    if (d2 < d1) {
        d2 += 30;
        m2 -= 1;
    }
    dd = d2 - d1;

    if (m2 < m1) {
        m2 += 12;
        y2 -= 1;
    }
    mm = m2 - m1;

    yy = y2 - y1;

    printf("Age: %d years %d months %d days\n", yy, mm, dd);
    return 0;
}
