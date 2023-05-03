#include<stdio.h>
#include<string.h>

struct practice6
{
    char character[10];
    int number;
    float floation_point;
};

int main() {
    struct practice6 p1;
    {
        strcpy(p1.character,"Hello");
        p1.number = 1;
        p1.floation_point = 1.00;
    };
    printf("%s\n",p1.character);
    printf("%d out of 1.\n",p1.number);
    printf("%f out of 1.00\n",p1.floation_point);
    return 0;
}
