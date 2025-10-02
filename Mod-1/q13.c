/*
Q13) Find the percentage of marks obtained by a student by entering the marks secured 
by the student in 5 subjects. Consider the total mark in each subject is 100.
*/

#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float percentage;
    printf("Enter marks in 5 subjects (out of 100): ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    percentage = (m1 + m2 + m3 + m4 + m5) / 5.0;
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}
