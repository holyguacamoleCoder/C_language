#include<stdio.h>
int main()
{
	float a,b=0.00;
	int c=0;
	scanf("%f %d",&a,&c);
	if(a<=3)
	{
		b=10+c/5*2;
	}
	else if(a>3 && a<=10)
	{
		b=10+(a-3)*2+c/5*2;
	}
	else
	{
		b=24+(a-10)*3+c/5*2;
	}
	printf("%.f",b);
	return 0;
}
