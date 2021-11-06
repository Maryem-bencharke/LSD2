
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("entrez le n elements:");
    scanf("%d" , &n);
    int var[] = {6,9,3,12};
    int i;
    int *ptr = var;
    for(i = 0 ; i<= n ; i++)
    {
        printf("%d\n",*ptr);
        ptr++;

    }
    return 0;
}