/*
Q4) Print sum of even numbers and sum of odd numbers in a given range.
*/
#include <stdio.h>

int main() {
    int start, end, sumEven = 0, sumOdd = 0, i;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    i = start;
    while(i <= end) {
        (i % 2 == 0) ? (sumEven += i) : (sumOdd += i);
        i++;
    }
    printf("Sum of even numbers: %d\nSum of odd numbers: %d\n", sumEven, sumOdd);
    return 0;
}
