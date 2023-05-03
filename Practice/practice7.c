#include<stdio.h>

int main() {
    char character;
    printf("Enter the character : ");
    scanf(" %c",&character);
    if((int)character >= 65 && (int)character <= 90) {
        printf("%c is a capital alphabet.\n",character);
    }
    else if ((int)character >= 97 && (int)character <= 122)
    {
        printf("%c is an alphabet.\n",character);
    }
    
}