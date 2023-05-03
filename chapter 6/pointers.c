#include<stdio.h>
//this is a c program.

void square(int *n);

int main() {
    int age = 20;
    int *ptr = &age;
    int newage = *ptr;
    printf("%d\n",newage);
    printf("%p\n",&newage);
    printf("%p\n",ptr);
    printf("%p\n",&age);
    printf("%p\n",&ptr);
    printf("%u",&newage);//converts into integer value.
    square(&age);
    printf("%d\n",age);
    return 0;
}

void square(int *n) {
    *n = (*n)*(*n);
    printf("%d\n",*n);
}