#include <stdio.h>
#include <math.h>

int main() {

    int bilet,a,b,c,d,e,f;
    printf("Vvedite nomer bileta(6 znakov)\n");
    scanf("%d",&bilet);

    if (bilet<1000000 && bilet>99999)
    {
        a=bilet%1000000/100000;
        b=bilet%100000/10000;
        c=bilet%10000/1000;
        d=bilet%1000/100;
        e=bilet%100/10;
        f=bilet%10/1;
        if ((a+b+c)==(d+e+f))
        {
            printf("tvoy bilet schastliviy");
        }
        else printf("tvoy bilet neschastliviy");
    }  
    else printf("nomer tvoego bileta nepravilyniy");
    return 0;
}
