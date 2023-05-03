#include<stdio.h>

void printhw(int count);

int main() {
    int count;
    scanf("%d",&count);
    printhw(count);
    return 0;
}

void printhw(int count) {
    if(count==0) {
        return;
    }
    printf("hello would\n");
    printhw(count-1);
}