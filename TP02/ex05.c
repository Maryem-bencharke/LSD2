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
    return x-sqrt(2);
}

float g(float x)
{
    return 1;
}

int main(int argc , char *argv[])
{
    float a = dichotomie(fonction , 0 , 3 , 3);
    printf("resultat de 3 itterations en utilisant dichotomie : %f\n" , a);
    float b = dichotomie(fonction , 0 , 3 , 10);
    printf("resultat de 10 itterations en utilisant dichotomie : %f\n" , b);
    float c = dichotomie(fonction , 0 , 3 , 30);
    printf("resultat de 30 itterations en utilisant dichotomie : %f\n" , c);
    return 0;
}