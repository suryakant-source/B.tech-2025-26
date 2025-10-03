/*
Q22) Hint/Explanation: An Armstrong number is a number that is the sum of its own digits 
each raised to the power of the number of digits. 
Example: 153 = 1^3 + 5^3 + 3^3, 1634 = 1^4 + 6^4 + 3^4 + 4^4
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, remainder, digits = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if(sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is NOT an Armstrong number.\n", n);

    return 0;
}
