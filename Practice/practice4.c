#include<stdio.h>

void p1() {
    char arr1[6] = "hello";//if size is equal to string then no space for null char sor issues arise so avoid that;
    printf("%s\n",arr1);
    arr1[3] = 't';
    printf("%s\n",arr1);
}

void p2() {}

int main() {}