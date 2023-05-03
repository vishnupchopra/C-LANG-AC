#include<stdio.h>

int main() {
    char arr1[6] = {'H','e','l','l','o','\0'};
    printf("%s\n",arr1);
    //arr1 = "hello"; error: assignment to expression with array type
    printf("%s\n",arr1);
    return 0;
}