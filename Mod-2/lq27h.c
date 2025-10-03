// h. 1 + x + x^2/2! + ... + x^n/n!
#include <stdio.h>
int main() {
    int n,i,x;
    double sum=1,fact=1,powx=1;
    scanf("%d %d",&x,&n);
    for(i=1;i<=n;i++) {
        powx *= x;
        fact *= i;
        sum += powx/fact;
    }
    printf("%lf",sum);
    return 0;
}
