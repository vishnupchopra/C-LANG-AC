#include<stdio.h>

void greetings();

int main() {
    greetings();
    return 0;
}

void greetings() {
    char type;
    scanf("%c",&type);
    switch(type) {
        case 'I': printf("namaste\n");
                  break;
        case 'F': printf("bonjour\n");
                  break;
        default:printf("enter a vaid capital alphabet.");
    }
}