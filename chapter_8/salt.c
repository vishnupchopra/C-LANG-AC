#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char password[9];
    printf("Enter password: ");
    fgets(password,9,stdin);//fgets only stores \n when there is space;
    for(int i = 0; i < 8; i += 2) {
        int random = rand()%100+33;
        printf("%d %d\n",random,i);
        password[i] = (char) random;
    }
    printf("Password is : %s\n",password);
}