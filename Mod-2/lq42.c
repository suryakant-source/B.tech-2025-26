/* 42. Print all numbers in a range that are divisible by 5 and 7 */
#include <stdio.h>
int main() {
    int i,n1,n2;
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++) {
        if(i%5==0 && i%7==0) printf("%d ",i);
    }
    return 0;
}
