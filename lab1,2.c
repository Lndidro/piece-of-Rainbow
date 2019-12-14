#include <stdio.h>
#include <math.h>

int main()
{
	float x,y,z,down,down1,down2,up,ch1,ch2,S;
	printf("Enter x : \n");
	scanf("%f",&x);
	printf("Enter y : \n");
	scanf("%f",&y);
	printf("Enter z : \n");
	scanf("%f",&z);
	/*x=0.0374;
	y=-0.825;
	z=16;*/
	up=1+pow(sin(x+y),2);
	down2=(2*y)/(1+x*x*y*y);
	down1=x-down2;
	down=fabs(down1);
	ch1=(up/down)*pow(x,fabs(y));
	ch2=pow(cos(atan(1/z)),2);
	S=ch1+ch2;
	printf("Result is %f\n", S);
	return 0;
}