#include<stdio.h>

int main() {
    float inital_value;
    printf("Enter initial value:");
    scanf("%f",&inital_value);
    float output;
    output = (((inital_value*0.1)*0.8)*0.07)*0.7;
    printf("%f M USD",output);
    return 0;
}