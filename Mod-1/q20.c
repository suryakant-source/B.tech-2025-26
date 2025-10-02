/*
Q20) Print the size of various basic data types (char, int, float, double) in C.
*/

#include <stdio.h>

int main() {
    printf("Size of char = %zu byte(s)\n", sizeof(char));
    printf("Size of int = %zu byte(s)\n", sizeof(int));
    printf("Size of float = %zu byte(s)\n", sizeof(float));
    printf("Size of double = %zu byte(s)\n", sizeof(double));
    return 0;
}
