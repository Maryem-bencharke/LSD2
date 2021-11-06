#include<stdio.h>
#include<stdlib.h>

float **sum_m(float **A , float **B , int n)
{

    float **R =(float ** ) malloc(sizeof(float*)*n);
    int i = 0;
    while(i<n)
    {
        R[i] =(float *)malloc(sizeof(float)*n);
        for(int j = 0 ; j<=n ; j++)
        {
            R[i][j] = A[i][j] + B[i][j];
        }
        i++;
    }
    return R;
}

float **mult_m(float **A , float **B , int n)
{
    float **R = (float **)malloc(sizeof(float)*n);
    int i = 0;
    while(i<n)
    {
        R[i] = (float *)malloc(sizeof(float)*n);
        for(int j = 0 ; j<=n ; j++)
        {
            R[i][j] = A[i][j] * B[i][j];
        }
        i++;
    }
    return R;
}


float **tran_m(float **A , int n)
{
    float **R = (float **)malloc(sizeof(float *)*n);
    int i = 0;
    while(i<n)
    {
        R[i] = (float *)malloc(sizeof(float)*n);
        for(int j = 0 ; j<n ; j++)
        {
            R[i][j] = A[j][i];
        }
        i++;
    }
    return R;
}

float **dia_m(float **A , int n)
{
    float **R = (float **)malloc(sizeof(float *)*2);
    R[0] =(float *)malloc(sizeof(float)*n);
    R[1] =(float *)malloc(sizeof(float)*n);
        for(int i=0 ; i<n ; i++)
        {
            R[0][i] = A[i][i];
            R[1][i] = A[i][n-i-1];
        }
    return R;
}

int main(int argc , char *argv[])
{
    int n = 2;
    float **A = (float**)malloc(sizeof(float * ) *n);
    float **B = (float ** )malloc(sizeof(float *)*n);
    int i = 0;
    while(i<n)
    {
        A[i] = (float *)malloc(sizeof(float )*n);
        B[i] = (float *)malloc(sizeof(float )*n);
        i++;
    }
    A[0][0] = 2;
    A[0][1] = 4;
    A[1][0]  =7;
    A[1][1] = 6;
    B[0][0] = 2;
    B[0][1] = 9;
    B[1][0] = 6;
    B[1][1] = 1;
    float **res;
    res = sum_m(A ,B , 2);
    float **ok;
    ok = mult_m(A , B , 2);
    i = 0;
    while(i<n)
    {
        int j = 0;

        while(j<n)
        {
            printf("%f,",res[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    i= 0;
    while(i<n)
    {
        int j= 0;
        while(j<n)
        {
            printf("%f , " , ok[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    A[0][0] = 2;
    A[0][1] = 4;
    A[1][0]  =7;
    A[1][1] = 6;
    float **oki;
    oki = tran_m(A , 2);
    i = 0;
    while(i<n)
    {
        int j = 0;

        while(j<n)
        {
            printf("%f,",oki[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    float **zeo;
    zeo = dia_m(A , 2);
    i = 0;
    while(i<n)
    {
        int j = 0;

        while(j<n)
        {
            printf("%f,",zeo[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

