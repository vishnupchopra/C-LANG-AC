#include<stdio.h>

int main() {
    int i=1;
    do {
        printf("%d\n",i);
        i++;
        if(i==6) {
            i++;
            continue;
        }

    } while(i<=10);
    return 0;
}