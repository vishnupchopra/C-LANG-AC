#include<stdio.h>

void pn(int *arr,int n);

int main() {
    int arr[]={1,2,3,4,5,6};
    pn(arr[6],6);
    return 0;
}

void pn(int *arr,int n) {
    for(int i=0;i<n;i++) {
        printf("%d\n",arr[n]);
    }
}