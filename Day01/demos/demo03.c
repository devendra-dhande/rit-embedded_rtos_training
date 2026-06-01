#include<stdio.h>

void print_binary(unsigned char value)
{
    unsigned char mask = 0x80;
    printf("%u : ", value);
    while(mask)
    {
        if(value & mask)
            printf("1");
        else
            printf("0");
        mask = mask >> 1;
    }
    printf("\n");
}

int main(void)
{
    unsigned char var = 0xA4;

    printf("Before : ");
    print_binary(var);

    //var &= ~(1 << 6);
    var &= ~(1 << 5);

    printf("After : ");
    print_binary(var);
    
    return 0;
}