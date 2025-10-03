// j. Sin(x) = x - x^3/3! + x^5/5! - x^7/7! + ...
#include <stdio.h>
#include <math.h>
int main() {
    int n,i,sign=1;
    double x,sum=0,term,fact;
    scanf("%lf %d",&x,&n);
    for(i=1;i<=n;i+=2) {
        fact=1;
        for(int j=1;j<=i;j++) fact*=j;
        term = pow(x,i)/fact;
        sum += sign*term;
        sign*=-1;
    }
    printf("%lf",sum);
    return 0;
}
