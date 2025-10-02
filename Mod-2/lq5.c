/*
Q5) Print numbers divisible by 3 but not divisible by 7 in the range 1 to 500.
*/
#include <stdio.h>

int main() {
    int i = 1;
    while(i <= 500) {
        if(i % 3 == 0 && i % 7 != 0)
            printf("%d ", i);
        i++;
    }
    printf("\n");
    return 0;
}
