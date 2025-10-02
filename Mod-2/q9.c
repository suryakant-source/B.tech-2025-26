/*
Q9) Find smallest among three entered numbers using else if ladder.
Use logical AND operator to combine multiple conditions.
*/

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c)
        printf("Smallest = %d\n", a);
    else if (b <= a && b <= c)
        printf("Smallest = %d\n", b);
    else
        printf("Smallest = %d\n", c);

    return 0;
}
