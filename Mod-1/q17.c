/*
Q17) Input the time in seconds and calculate the corresponding hours, minutes, and
remaining seconds. (Example: Input = 3665; Output = 1 Hour 1 minute 5 seconds).
*/

#include <stdio.h>

int main() {
    int sec, h, m, s;
    printf("Enter time in seconds: ");
    scanf("%d", &sec);

    h = sec / 3600;
    sec %= 3600;
    m = sec / 60;
    s = sec % 60;

    printf("%d Hour(s) %d Minute(s) %d Second(s)\n", h, m, s);
    return 0;
}
