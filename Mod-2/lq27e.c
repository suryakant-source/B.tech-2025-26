// e. 1 + 2^3 + 3^3 + ... + n^3
#include <stdio.h>
int main() {
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) sum += i*i*i;
    printf("%d",sum);
    return 0;
}
