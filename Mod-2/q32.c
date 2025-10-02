/*
Q32) Create a menu-driven program using switch-case that asks for two numbers and an operator (+,-,*,/). 
Prints the result or error message for invalid input.
*/
#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+,-,*,/): ");
    scanf(" %c", &op);

    switch(op){
        case '+': printf("Result: %d\n", a+b); break;
        case '-': printf("Result: %d\n", a-b); break;
        case '*': printf("Result: %d\n", a*b); break;
        case '/': (b!=0) ? printf("Result: %d\n", a/b) : printf("Division by zero error\n"); break;
        default: printf("Invalid operator\n");
    }

    return 0;
}
