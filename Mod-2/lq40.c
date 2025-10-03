/* 40. Print all palindrome numbers in a given range */
#include <stdio.h>
int main() {
    int i,n1,n2,temp,rev,num;
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++) {
        temp=i; rev=0;
        while(temp>0) {
            rev=rev*10+temp%10;
            temp/=10;
        }
        if(rev==i) printf("%d ",i);
    }
    return 0;
}
