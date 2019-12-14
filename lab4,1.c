#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int a[10],i,min,minN,max,maxN,replacer;
    printf("enter elements from 1 to 10(0 to 9)\na[0]= ");
    scanf("%d",&a[0]);
    min=a[0];
    minN=0;
    max=a[0];
    maxN=0;
    for (i=1;i<10;i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
        if (min>a[i]) {
            min=a[i];
            minN=i;
        }
        if (max<a[i]) {
            max=a[i];
            maxN=i;
        }
    }
    replacer=a[minN];
    a[minN]=a[maxN];
    a[maxN]=replacer;
    printf("final array: ");
    for (i=0;i<10;i++)
    printf("%d",a[i]);
    printf("\nwork done");
    return 0;
}