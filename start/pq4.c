#include<stdio.h>
#include<math.h>

int main() {//5*2-2*3
printf("%f \n",5*2-2*3.0);
printf("%f \n",5*2-2*3);
printf("%d \n",5*2-2*3);
//5*2/2*3
printf("%d \n",5*2/2*3);
printf("%d \n",5*(2/2)*3);
printf("%d \n",5+2/2*3);
//operators.
printf("%d \n",3>=3);
printf("%d \n",4==4);
printf("%d \n",4!=4);
printf("%d \n",4>3 || 3>=3);
printf("%d \n",!4>6);/*Remember that use NOT operator with brackets*/
printf("%d",!(4>6));
return 0;
}