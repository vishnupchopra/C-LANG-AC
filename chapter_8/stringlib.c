#include<stdio.h>
#include<string.h>

int main() {
    char sample[25];
    fgets(sample,25,stdin);//fgets also adds and \n to the end if there is space,So string length + 1 becomes the length.
    int length = strlen(sample) - 1;
    printf("%d\n",length);
    char newsample[25];
    strcpy(newsample,sample);
    printf("%s",newsample);
}