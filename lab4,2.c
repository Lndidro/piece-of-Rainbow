#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int a[10],i,middle=0,count=0;
    for (i=0;i<10;i++) {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
        middle+=a[i];
    }
    middle=middle/10;
    for (i=0;i<10;i++) {
        if (a[i]>middle) {
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}