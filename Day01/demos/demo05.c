#include<stdio.h>

int addition(int, int);
int factorial(int);

int main(void)
{

    //printf("10 + 20 = %d\n", addition(10, 20));
    //printf("5! = %d\n", factorial(5));

    int (*padd)(int, int) = addition;
    int (*pfact)(int) = factorial;

    printf("10 + 20 = %d\n", padd(10, 20));
    printf("5! = %d\n", pfact(5));


    return 0;
}

int addition(int op1, int op2)
{
    return op1 + op2;
}
int factorial(int num)
{
    int fact = 1;
    for(int i = 1 ; i <= num ; i++)
        fact *= i;
    return fact;
}