#include<stdio.h>

int main() {
    int number,i,j,k;

    printf("Enter the number:");
    scanf("%d",&number);
    i = number-1;

    while(i>0) {
        number = number*i;
        i -= 1;
    }

    number > 0? printf("%d",number) : printf("1");

    return 0;
}