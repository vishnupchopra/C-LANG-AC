#include<stdio.h>

void sqr(int *a);
void pointr() {
    int c = 10;
    int* d = &c;

    printf("Value of pointer = %p\n",d);
    printf("Value of variable = %d\n",c);
    printf("Value of memory address in pointer = %d",*d);
}
int main() {
    char val;
    int inp;
    scanf("%c",&val);
    switch (val)
    {
    case 'a':scanf("%d",&inp);
             sqr(&inp);
             printf("%d",inp);
             return 0;
             break;
    
    default:pointr();
        break;
    }
    return 0;
}

void sqr(int *a) {
    *a = *a * *a;
    printf("Square : %d\n",*a);
}