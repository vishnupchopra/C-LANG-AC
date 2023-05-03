#include<stdio.h>

void aryop(char* ptr){
    for(int i = 0; i <= 4; i++) {
        printf("Enter value : ");
        scanf(" %c",ptr);
        ptr++;
    }
}

int main() {
    char chr[6];
    char* chrptr = chr;

    //aryop(chrptr);
    for(int i = 0; i <= 5; i++) {
        printf("Enter value : \n");
        scanf(" %c",chrptr);//This space before %c helps resolve the iteration skipping, reffer to onenote;
        chrptr++;
    }
}