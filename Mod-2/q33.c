/*
Q33) Calculate parking charges of a vehicle. Enter vehicle type (H/L) and number of hours. 
Charges: Heavy H: Rs20/first 5h, Rs40/beyond 5h. Light L: Rs10/first 3h, Rs30/beyond 3h.
*/
#include <stdio.h>

int main() {
    char type;
    int hours, charges;
    printf("Enter vehicle type (H/L): ");
    scanf(" %c", &type);
    printf("Enter number of hours: ");
    scanf("%d", &hours);

    charges = (type=='H') ? ((hours<=5)? hours*20 : 5*20 + (hours-5)*40) :
              (type=='L') ? ((hours<=3)? hours*10 : 3*10 + (hours-3)*30) : -1;

    (charges==-1) ? printf("Invalid vehicle type\n") : printf("Parking charges: Rs %d\n", charges);

    return 0;
}
