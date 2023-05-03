#include<stdio.h>
//THIS FX IS VERY IMPORTANT.
int sum(int n);
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
int sum(int n) {
    if(n==1) {
        return 1;
    }
    int sumnm1=sum(n-1);
    int sumnm=sumnm1+n;
    return sumnm;
}