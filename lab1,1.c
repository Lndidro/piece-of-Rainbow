#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <cmath>
 

int main(void) { 
    setlocale(LC_ALL,"Russian");

    int x,a;

    printf("Введите переменную x");
    scanf("%d",&x);

    a= 8*pow(x,5);

    printf("%d\n",a);
    return 0;
}