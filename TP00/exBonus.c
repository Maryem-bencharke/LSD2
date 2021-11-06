#include<stdlib.h>
#include<stdio.h>

void print_nth_byte(int n , int m)
{
    for(int i =n*8 ; i>=0 ; i--)
    {
        if(m & (1<<i))
            printf("1");
        else
            printf("0"); 
    }
    printf("\n");
}

int main()
{
    print_nth_byte(1,2);
}
