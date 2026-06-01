#include<stdio.h>

int sum(int, int);
int diff(int, int);
int product(int, int);

// typedef - giving another/small/nick name to the existing data type
// syntax - typedef oldName nickName;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

// due to typedefs code becomes readable and more maintainable/protable

typedef int (*funptr_t)(int, int);

int main(void)
{
    // int (*psum)(int, int) = sum;
    // int (*pdiff)(int, int) = diff;
    // int (*pproduct)(int, int) = product;

    funptr_t psum = sum;
    funptr_t pdiff = diff;
    funptr_t pproduct = product;   

    // int (*fp_arr[3])(int, int);
    // fp_arr[0] = sum;
    // fp_arr[1] = diff;
    // fp_arr[2] = product;

    //int (*fp_arr[3])(int, int) = {sum, diff, product};

    funptr_t fp_arr[3] = {sum, diff, product};

    for(int i = 0 ; i < 3 ; i++)
        printf("res = %d\n", fp_arr[i](20, 10));

    return 0;
}

int sum(int op1, int op2)
{
    return op1 + op2;
}
int diff(int op1, int op2)
{
    return op1 - op2;
}
int product(int op1, int op2)
{
    return op1 * op2;
}