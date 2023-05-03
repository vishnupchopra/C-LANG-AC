#include<stdio.h>

int main() {
    int i;
    int n;
    scanf("%d",&i);
    scanf("%d",&n);
    do {
        printf("%d\n",i);
        i=i+3;
    } while(i<=n);
    return 0;
}