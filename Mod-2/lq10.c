/*
Q10) Print all odd numbers in a given range.
*/
#include <stdio.h>

int main() {
    int start, end, i;
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    i = start;
    while(i <= end) {
        if(i % 2 != 0)
            printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}
