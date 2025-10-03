/* 41. Print all Armstrong numbers in a given range */
#include <stdio.h>
#include <math.h>
int main() {
    int i,n1,n2,temp,digits,sum,num;
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++) {
        temp=i; sum=0; num=i;
        digits=0;
        while(temp>0){ digits++; temp/=10; }
        temp=i;
        while(temp>0) {
            sum+=pow(temp%10,digits);
            temp/=10;
        }
        if(sum==num) printf("%d ",num);
    }
    return 0;
}
