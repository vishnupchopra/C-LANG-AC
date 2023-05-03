#include<stdio.h>

int main() {
    char list[3];
    printf("Enter items into list : ");
    scanf("%c",&list[0]);
    scanf("%c",&list[1]);
    scanf("%c",&list[2]);
    printf("%c",list[0]);
    printf("%c",list[1]);
    printf("%c",list[2]);
}