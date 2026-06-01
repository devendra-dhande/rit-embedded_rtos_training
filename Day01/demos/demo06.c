#include<stdio.h>

int sum(int, int);
int diff(int, int);
int product(int, int);

int main(void)
{
    int (*psum)(int, int) = sum;
    int (*pdiff)(int, int) = diff;
    int (*pproduct)(int, int) = product;

    int (*fp_arr[3])(int, int);
    fp_arr[0] = sum;
    fp_arr[1] = diff;
    fp_arr[2] = product;


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