#include<stdlib.h>
#include<stdio.h>

void check_msb(int num)
{
    if(num >> 31)
        printf("msb is a set");
    else
        printf("is not a set");
    return;
}

void print_bits(unsigned char byte)
{
    char n = byte;
    for(; n > 0 ; n = n / 2)
    {
        char r = n%2;
        
        printf("%d",r);
    }
    return;
}



