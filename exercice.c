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


/*ex4*/
void print_nth_byte(int n , int m)
{
    int i = m<<n;
    while(i>0)
    {
        if(n & m)
            printf("1");
        else
            printf("0");
        break;
    }
    printf("\n");
}

int main()
{
    print_nth_byte(2,1);
}

/*exercice 2*/



int **dummy(int **x, int n)
{
	int **y;
	int i;
	int j;

	i = 0;
	y = (int**)malloc(sizeof(int*) * (n+1));
	while (i < n)
	{
		y[i] = (int*)malloc(sizeof(int) * n);
		j = 0;
		while(j < n)
		{
			y[i][j] = j;
			j++;
		}
		i++;
	}
    
	y[n] = x[0];
	return(y);

}

int main()
{
	int n;
	int **x;
	int i;
	int j;

	n = 10;
	i = 0;
	x = (int**)malloc(sizeof(int*) * n);
	while (i < n)
	{
		x[i] = (int*)malloc(sizeof(int) * n);
		j = 0;
		while(j < n)
		{
			x[i][j] = j;
			j++;
		}
		i++;
	}
    int **tmp;
    tmp = x;
	x = dummy(x, n);
    i = 0;
    while(i < n)
    {
        free(tmp[i]);
        i++;
    }
        
    free(tmp);
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			printf("%d ", x[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
    i=0;
    while(i<n)
    {
        free(x[i]);
        i++;
    }
    free(x);
    return 0;
}

