#include<stdio.h>

int main() {
  /*  int i = 1;
    while(i<= 10) {
        printf("hello world\n");
        i=i+2;//remember that i+2 doesn't mean anything it is i=i+2 otherwise you will create an infinite loop.
    }
    return 0;*/
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n) {
        printf("%d\n",i); 
        i++;
    }
}