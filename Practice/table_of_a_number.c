#include<stdio.h>

int main() {
    int number;
    int i = 1;

    printf("Enter the number:");
    scanf("%d",&number);

    do {
        printf("%d\n",number*i);
        i+=1;
    } while(i<=10);

// To check the flow control statement continue;
    int i = 0;

    do{
        i++;
        if(i==6) {
            continue;
        }
        printf("%d \n",i);
    } while(i<=9);
    
    return 0;
}