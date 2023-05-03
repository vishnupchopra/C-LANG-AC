#include<stdio.h>

int main() {
    //2*3
    int marks[2][3] = {{90,91,96},{91,95,97}};
    printf("%d\n",marks[0][2]);
    marks[0][2] = 99;
    printf("%d\n",marks[0][2]);
    return 0;
}