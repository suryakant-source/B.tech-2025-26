/*
Q24) Write a program to enter coordinates of a point and check whether the point lies in the 1st, 2nd, 3rd, 4th quadrant or on the axis.
*/
#include <stdio.h>

int main() {
    int x, y;
    printf("Enter coordinates (x y): ");
    scanf("%d %d", &x, &y);

    (x>0 && y>0) ? printf("1st Quadrant\n") :
    (x<0 && y>0) ? printf("2nd Quadrant\n") :
    (x<0 && y<0) ? printf("3rd Quadrant\n") :
    (x>0 && y<0) ? printf("4th Quadrant\n") :
    (x==0 && y==0) ? printf("Origin\n") :
    (x==0) ? printf("Lies on Y-axis\n") : printf("Lies on X-axis\n");

    return 0;
}
