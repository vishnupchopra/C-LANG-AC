#include<stdio.h>

void fx(int *a,int *b,int *c);
int main() {
    int a,b,c;
    fx(&a,&b,&c);
    printf("%d",(a+b+c)/3);
    return 0;
}
void fx(int *a,int *b,int *c){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    *a = x+y;
    *b = x*y;
    *c = (x+y)/2;
}