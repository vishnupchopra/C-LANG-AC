#include<stdio.h>//THIS PIECE OF CODE IS REALLY IMPORTANT!

int main() {
    int i = 1;
    do {
        if(i==6) {
            i=i+1;
            continue;
        }
        printf("%d\n",i);
        i=i+1;
    } while(i<=10);
}