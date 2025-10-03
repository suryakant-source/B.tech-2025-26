// c. 1 + 1/2^2 + 1/3^2 + ... + 1/n^2
#include <stdio.h>
int main() {
    int n,i;
    float sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) sum += 1.0/(i*i);
    printf("%f",sum);
    return 0;
}
