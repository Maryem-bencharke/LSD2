#include<stdlib.h>
#include<stdio.h>
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

