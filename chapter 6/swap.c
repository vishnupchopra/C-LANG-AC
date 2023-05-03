#include<stdio.h>

void swap(int *a, int *b);
int main() {
    int x = 2, y = 5;
    swap(&x,&y);
    printf("%d & %d \n",x,y);
    return 0;
}
void swap(int *a, int *b) {
    int t = *a;
    *a=*b;
    *b=t;
    printf("%d & %d \n",*a,*b);
}