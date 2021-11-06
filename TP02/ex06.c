#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float dichotomie(float(*f)(float) , float a , float b , int n)
{
    float alpha = 0;
    for(int i = 0 ; i<=n ; i++)
    {
        
        alpha =  (a + b)/2;
        if(f(alpha)>0)
        {
            b = alpha;
        }
        else
        {
            a = alpha;
        }
    }
    return alpha;
}

float Newton(float(*f)(float) , float(*g)(float) ,float alpha , int n)
{
    for(int i=0 ; i<=n ; i++)
    {
        alpha = alpha - f(alpha)/g(alpha);
    }
    return alpha;

}

float Dichotomie2(float *f(float) , float a , float b , int e)
{
    int n;
    n = (int)log((b-a/e)/log(2));
    return dichotomie(f , a, b , n);
}

float fonction(float x)
{
    return pow(x,3) - x - 3;
}

int main(int argc , char *argv[])
{
    int n;
    printf("entrez la valeur de n:");
    scanf("%d\n" , n);
    float *array = (float * )malloc(sizeof(float)*n);
    for(int i=0 ; i<=n ; i++)
    {
        array[i] = dichotomie(fonction ,0 , 3 , i);
        printf("%f" , array[i]);

    }
    return 0;
}