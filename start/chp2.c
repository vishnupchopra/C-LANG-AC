#include<stdio.h>
#include<math.h>

int main() {
    int a = 22;
    int b = a;
    int c = b * 5;
    int d = 1,f;

    //int x = y = z; this is invalid statement due to the fact that  z and y are used before defining.
    int x,y,z;
    x = y = z = 5; //Now this is valis statement.
    //operators ;
    int e = a%c;
    printf("%d \n", e);

    printf("%f",2.0/3);// If it were 2/3 then we would use int becuz int op int is int and ans would be 0 since int.
    return 0;
}