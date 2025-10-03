/* 39. Print all prime numbers in a given range */
#include <stdio.h>
int main() {
    int i,j,n1,n2,prime;
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++) {
        if(i<2) continue;
        prime=1;
        for(j=2;j*j<=i;j++) {
            if(i%j==0) { prime=0; break; }
        }
        if(prime) printf("%d ",i);
    }
    return 0;
}
