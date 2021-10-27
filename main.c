#include"head.h"
int main()
{
    print_nth_byte(2,1);
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