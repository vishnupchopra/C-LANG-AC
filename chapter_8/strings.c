#include<stdio.h>

void printstring(char arr[]);

int main() {

    char firstname[] = {'V','I','S','H','N','U','\0'};
    char surname[] = "PRATAP CHOPRA";
    for(int i=0;i<=6;i++) {
        printf("%c",firstname[i]);
    }
    printf("\n");
    for(int i=0;i<=12;i++) {    
        printf("%c",surname[i]);
    }

    printf("\n");

    printstring(firstname);
    printstring(surname);

    printf("\n");

    char name[50];
    scanf("%s",name);
    printf("your name is : %s", name);
    return 0;
}

void printstring(char arr[]) {/*here we do not have to pass size of array since it is a string*/
    for(int i=0;arr[i] != '\0';i++) {
        printf("%c",arr[i]);
    }
}