#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    float i,g,d,p;
    g=2019-1626;
    d=20;
    for (i=1;i<=g;i++)
    {
        p=d*0.04;
        d+=p;
    }
    printf("Nowadays amount of money = %f $", d);
    return 0;
}
