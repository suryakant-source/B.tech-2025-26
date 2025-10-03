// k. Cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! + ...
#include <stdio.h>
#include <math.h>
int main() {
    int n,i,sign=1;
    double x,sum=0,term,fact;
    scanf("%lf %d",&x,&n);
    for(i=0;i<=n;i+=2) {
        fact=1;
        for(int j=1;j<=i;j++) fact*=j;
        term = pow(x,i)/fact;
        sum += sign*term;
        sign*=-1;
    }
    printf("%lf",sum);
    return 0;
}
