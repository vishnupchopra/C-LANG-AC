#include<stdio.h>

int main() {
    int day;
    scanf("%d",&day);
    switch(day) {
        case 1 : printf("The day is sunny. \n");
                break;
        case 2 : printf("It is ranning out side. \n");
                break;
        default : printf("Enter a valid day. \n");        
    }
    return 0;
    }