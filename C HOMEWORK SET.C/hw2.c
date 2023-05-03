#include<stdio.h>
//write a program to check if given no. is digit or not?
int main() {
    int value;
    scanf("%d",&value);
    if(value >= 0 && value <= 9) {printf("given no. is a single digit no.");} else{printf("given no. is not a single digit no.");}
    return 0;
}