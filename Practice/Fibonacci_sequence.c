#include<stdio.h>

int fibonnaci(int terms) {
    if(terms == 0 || terms == 1) {
        return 1;
    }
    int fibofn = fibonnaci(terms - 1) + fibonnaci(terms - 2);
    return fibofn;
}
int main() {
    int numofterms;
    printf("Enter number of terms to be printed : ");
    scanf("%d",&numofterms);
    int i = 0;
    while (i <= numofterms)
    {
        printf("%d\n",fibonnaci(i));
        i++;
    }
    return 0;
}