#include<stdio.h>

int main() {
    float value = 100.00;
    float* value_ptr = &value;
    printf("%u\n",value_ptr);
    printf("%f\n",*value_ptr);
    value_ptr++;//adds the 4 bytes of a float to the address;
    printf("%u\n",value_ptr);
    printf("%f\n",*value_ptr);
    value_ptr--;//subtratcts the 4 bytes of a float to the address;
    printf("%u\n",value_ptr);
    printf("%f\n",*value_ptr);
    value_ptr++;//adds the 4 bytes of a float to the address;
    printf("%u\n",value_ptr);
    return 0;
}