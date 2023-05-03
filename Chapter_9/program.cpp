#include<iostream>
#include<algorithm>

int main() {
    std::sort(A,A+N);
    std::sort(B,B+N);
    for(int k = 0; k <= N - 1; k++) {
        if(A[k] != B[k]){
            return false;
        }
        else{
            return true;
        }
    }
}