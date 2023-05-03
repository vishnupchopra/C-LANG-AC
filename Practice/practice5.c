#include<stdio.h>

int main() {
    char vowels[] = {'a','e','i','o','u','A','E','I','O','U'};
    char checker;
    int flag;
    printf("Enter word here : ");
    scanf("%c",&checker);
    for(int i = 0; i <= 10; i++) {
        if(checker == vowels[i]) {
            flag = 1;
        }
    }
    if(flag == 1) {
        printf("Vowel");
    }
    else {
        printf("Consonant");
    }
    return 0;
}