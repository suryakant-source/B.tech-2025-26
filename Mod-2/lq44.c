/* 44. Print multiplication table in the given range */
#include <stdio.h>
int main() {
    int i,j,n1,n2;
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++) {
        for(j=1;j<=10;j++) {
            printf("%d x %d = %d\n",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}
