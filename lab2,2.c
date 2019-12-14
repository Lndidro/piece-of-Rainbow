#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()

{
    int a,b,c,n;
    printf("Vvedite a\n");
    scanf("%d",&a);
    printf("Vvedite b\n");
    scanf("%d",&b);
    printf("Vvedite c\n");
    scanf("%d",&c);
    printf("Vvedite n\n");
    scanf("%d",&n);
    if(a % n != 0) printf("\n n ne yavlyaetsya delitelem a");
    else printf("\n n yavlyaetsya delitelem a");
    if(b % n != 0) printf("\n n ne yavlyaetsya delitelem b");
    else printf("\n n yavlyaetsya delitelem b");
    if(c % n != 0) printf("\n n ne yavlyaetsya delitelem c");
    else printf("\n n yavlyaetsya delitelem a");
    return 0;
}