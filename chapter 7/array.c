#include<stdio.h>

void array();
void price();
int main() {
    price();
    return 0;
}
void array() {
    int marks[2];
    scanf("%d",&marks[0]);
    scanf("%d",&marks[1]);
    scanf("%d",&marks[4]);
    printf("%d\n",marks[0]);
    printf("%d\n",marks[1]);
    printf("%d\n",marks[4]); 
}
void price() {
    float price[3];
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    printf("price1 %f, price2 %f, price3 %f, \n", price[0]*1.18,price[1]*1.18,price[2]*1.18);
}