# include<stdio.h>

int main() {
    int A, B, C, D, E, F, G;
    printf("Please write the no. of respective currency infront of it. \n");
    printf("2000 = ");
    scanf("%d", &A);

    printf("500 = ");
    scanf("%d", &B);

    printf("200 = ");
    scanf("%d", &C);

    printf("100 = ");
    scanf("%d", &D);

    printf("50 = ");
    scanf("%d", &E);

    printf("20 = ");
    scanf("%d", &F);

    printf("10 = ");
    scanf("%d", &G);

    printf("TOTAL AMOUNT IS %d", A*2000 + B*500 + C*200 + D*100 + E*50 + F*20 + G*10);
    return 0;
}