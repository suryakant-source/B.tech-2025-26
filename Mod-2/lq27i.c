// i. 1 + 1/2! + 1/3! + ... + 1/n!
#include <stdio.h>
int main() {
    int n,i;
    double sum=1,fact=1;
    scanf("%d",&n);
    for(i=2;i<=n;i++) {
        fact *= i;
        sum += 1.0/fact;
    }
    printf("%lf",sum);
    return 0;
}
