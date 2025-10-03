/* 33. Print the following pattern:
*****
***
* */
#include <stdio.h>
int main() {
    int i,j,n=5;
    for(i=n;i>=1;i-=2) {
        for(j=1;j<=i;j++) printf("*");
        printf("\n");
    }
    return 0;
}
