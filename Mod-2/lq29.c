/* 29. Print the following pattern:
A
A B
A B C
A B C D
A B C D E
A B C D E F */
#include <stdio.h>
int main() {
    int i,j,n=6;
    for(i=1;i<=n;i++) {
        for(j=0;j<i;j++) printf("%c ", 'A'+j);
        printf("\n");
    }
    return 0;
}
