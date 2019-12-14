#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int s;
    printf("1-winter, 2-spring, 3-summer, 4-autumn\n what you interesting in?\n");
    scanf("%d",&s);
    if(s<1 && s>4) printf("there is no such choice");
    else switch(s)
    {
        case 1: printf("winter: december, january, february.");
        break;
        
        case 2: printf("spring: march, april, may.");
        break;

        case 3: printf("summer: june, july, august.");
        break;

        case 4: printf("autumn: september, october, november.");
        break;
    }  
    return 0;
}