#include<stdio.h>

int main() {
    int num[3];
    int *numptr = num;
    printf("Enter the number : ");
    int i = 0;
    while(i != 3) {
    scanf("%d",numptr);
    numptr += 1;
    i++;
    }

    while(i != 0) {
    numptr -= 1;
    printf("%d\t",*numptr);
    
    i--;
    }
}