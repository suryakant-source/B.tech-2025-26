/* 43. Print all factorials of a number in the given range */
#include <stdio.h>
int main() {
    int i,n1,n2,j;
    long long fact;
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++) {
        fact=1;
        for(j=1;j<=i;j++) fact*=j;
        printf("%d! = %lld\n",i,fact);
    }
    return 0;
}
