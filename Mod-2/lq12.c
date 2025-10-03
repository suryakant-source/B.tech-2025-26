/*
Q12) Check whether an entered number is a prime or composite number.
*/
#include <stdio.h>

int main() {
    int n, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("%d is neither prime nor composite\n", n);
    } else {
        for(int i = 2; i*i <= n; i++) {
            if(n % i == 0) {
                flag = 1;
                break;
            }
        }
        printf("%d is %s\n", n, flag ? "Composite" : "Prime");
    }
    return 0;
}
