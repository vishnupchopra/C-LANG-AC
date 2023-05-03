# include<stdio.h>

int main() {
    float side;
    printf("Enter side = ");
    scanf("%f", &side);// don't use \n for changing line in scanf otherwise it shows error.
    
    float area = side * side;
    printf("area is = %f cm", area);
    return 0;
}