// f. 1/2 + 2/3 + ... + n/(n+1)
#include <stdio.h>
int main() {
    int n,i;
    float sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) sum += (float)i/(i+1);
    printf("%f",sum);
    return 0;
}
