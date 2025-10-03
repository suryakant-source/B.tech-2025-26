/* 30. Print the following pattern:
1
1 2 3
1 2 3 4 5
1 2 3 4 5 6 7 */
#include <stdio.h>
int main() {
    int i,j,n=4;
    for(i=1;i<=n;i++) {
        for(j=1;j<=2*i-1;j++) printf("%d ",j);
        printf("\n");
    }
    return 0;
}
