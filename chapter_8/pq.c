#include<stdio.h>

int count(char str[]);

int main() {
    char a = ' ';
    char name[20];
    fgets(name,20,stdin);
    puts(name);
    printf("%d",count(name));
    return 0;
}
//if we use str[i] = '0' then the loop will not run ;
//and we also need to do -1 since it also counts null char;
int count(char str[]) {
    int count = 0;
    for(int i = 0;str[i] != '\0';i++) {
        count++;
        if(str[i] == 32) {
            continue;
        }
    }
    return count-1;
}