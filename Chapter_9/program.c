#include<stdio.h>

int main() {
    int flag = 0;
    int N = 5;
    int A[] = {5,6,3,5,2};
    int B[] = {6,5,3,6,2};
    for(int i = 0; i <= N-1; i++) {
        for(int j = 0; j <= N-1; j++) {
            if(A[i] > A[j]) {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    for(int i = 0; i <= N-1; i++) {
        for(int j = 0; j <= N-1; j++) {
            if(B[i] > B[j]) {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }

    for(int k = 0; k <= N - 1; k++) {
        if(A[k] != B[k]){
            flag = 1;
        }
    }
    printf("%d",flag);
}