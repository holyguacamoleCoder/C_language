#include<stdio.h>
#include<math.h>
float diedai(float x,float a);
int main()
{
	float a,x=1,y;
	scanf("%f",&a); 
	if(a==0)
	{
		printf("0.00000");
		return 0;
	}
	do
	{
		y=diedai(x,a);
		if(fabs(y-x)<0.00001)
		break;
		x=y;
	}while(1);
	printf("%.5f",x);
	return 0;
}
float diedai(float x,float a)
{
	float y;
	y=(x+a/x)/2.00;
	return y;
}
