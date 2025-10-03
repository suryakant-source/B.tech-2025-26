// g. -x + x^2 - x^3 + ... + (-1)^n * x^n
#include <stdio.h>
#include <math.h>
int main() {
    int n,i,x;
    int sum=0;
    scanf("%d %d",&x,&n);
    for(i=1;i<=n;i++) sum += pow(-1,i)*pow(x,i);
    printf("%d",sum);
    return 0;
}
