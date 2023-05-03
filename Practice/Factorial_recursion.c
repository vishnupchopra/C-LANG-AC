#include<stdio.h>

int factorial(int n);

int main() {
    int number;

    printf("Enter a number:");
    scanf("%d",&number);

    printf("The factorial is %d",factorial(number));

    return 0;
}

int factorial(int n) {
    if(n == 0) {
        return 1;
    }

    int factorialn = n*factorial(n-1);
    return factorialn;
}