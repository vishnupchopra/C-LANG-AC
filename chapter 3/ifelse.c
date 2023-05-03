#include<stdio.h>

int main() {
    int age;
    scanf("%d",&age);
    if(age >= 18) {
        printf("You are an adult. \n");
    }
    else if(age >= 12 && age < 18) {
        printf("You are an teenager. \n");
    }
    else {
        printf("You are an child. \n");
    }
    return 0;
}