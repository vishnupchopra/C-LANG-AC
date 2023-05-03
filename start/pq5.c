#include<stdio.h>
#include<math.h>

int main() {
    //write a program to find out if a number is divisible by 2?
    int number;
    printf("enter the number ");
    scanf("%d",&number);

    printf("%d", number%2 == 0);
    return 0;
}