#include<stdio.h>

int main() {
    /*for(int i = 0 ; i <= 10 ; i++) {printf("%d\n",i);}
    for(char j= 'a'; j<='z'; j=j+3) {
        printf("%c\n",j);
    }
    return 0;*/
    //Print the table of a number input by the user?
   /* int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++) {
        printf("%d\n",n*i);
    }
       return 0;*/
    //
    int n=1;
    for(int i=n; ; i=i) {
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%7==0) {
            break;
        }
    }
    printf("Thank you!\n");
    return 0;
}