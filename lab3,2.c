#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int n,a,b,c,d,i,j,k,l;
    a=50;
    b=20;
    c=5;
    d=2;
    n=0;
    for (i=0;a*i<=100;i++)
    {
        for (j=0;b*j<=100;j++)
        {
            for (k=0;c*k<=100;k++)
            {
                for (l=0;d*l<=100;l++)
                {
                    if (a*i+b*j+c*k+d*l==100) n+=1;
                }
            }
        }
    }
    printf("amount of varietis = %d", n);
    return 0;
}