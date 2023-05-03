#include<stdio.h>
#include<math.h>
//Average of 3 numbers?
int main() {
   /* int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    float d = (a+b+c)+0.0;// +0.0 to make the data type into a float since int + float is float.
    printf("%f", d/3);
    //write a program to print the smallest number of two.
    int e,f;
    scanf("%d",&e);
    scanf("%d",&f);
    if(e>f) {
        printf("%d",e);
    }
    else{
        printf("%d\n",f);
    }

    int g = 1.99999;
    printf("%d",g);*/
    //grading of students 
    /*
    int marks;
    scanf("%d",&marks);
    if(100 >= marks && marks >=90) {
        printf("A+");
    } else if(90> marks && marks >= 70) {printf("A");}
    else if(70> marks && marks >=30) {printf("B");}
    */
   char charachter;
   scanf("%c",&charachter);
   if(charachter >= 'A' && charachter <= 'Z' ) {printf("upper case letter.");}
   else if(charachter >= 'a' && charachter <= 'z') {printf("lower case letter.");}
   else{printf("enter a valid letter.");}
    return 0;
}