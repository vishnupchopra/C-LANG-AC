#include<stdio.h>

void enterplaces(char* arr) {
    for(int i = 0; i <= 4; i++) {
        printf("Enter the place : ");
        scanf(" %c",arr);
        arr++;
    }
}

int main() {
    char places[5];
    enterplaces(places);
    for(int i = 0; i <= 4; i++) {
        printf("%c",places[i]);
    }
    return 0;
}