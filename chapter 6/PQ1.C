#include<stdio.h>

int main() {
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;//value at addres of ptr. 

    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);

    *ptr += 5;
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);

    (*ptr)++;
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
    return 0;
}