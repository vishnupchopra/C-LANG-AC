#include<stdio.h>

int wordcount(char arr[]) {
    int count = 0;
    while (arr[count] != '\0') 
    {
        printf("%c %d\n",arr[count],count);
        count++;
    }
    return count-1;
}

int main() {
    char word[20];
    printf("Enter the scentence: ");
    fgets(word,20,stdin);
    printf("Length of scentence is %d",wordcount(word));
    return 0;
}