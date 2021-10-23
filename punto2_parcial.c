#include<stdio.h>
#include<conio.h>

void ordenar (long long int v[],int n)
{
    int i;
    int j;
    int temporal;

    for(i=n;i>0;i--)
    {
        for(j=0;j<i-1;j++)
        {
            if(v[j]<v[j+1])
            {
                temporal=v[j];
                v[j]=v[j+1];
                v[j+1]=temporal;
            }
        }
    }
}