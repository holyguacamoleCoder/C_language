#include<stdio.h>
int f(int x)
{
	int y=0;
	if(x>=-20 && x<=0)
	{
		y=2*x-1;
	}
	else if(x>0 && x<10)
	{
		y=x*x-2*x;
	}
	else if(x>=10 && x<=20)
	{
		y=x*x*x-2*x*x;
	}
	return y;
}
int  main()
{
	int m=0;
	int n=0;
	int i=0;
	scanf("%d %d",&m,&n);
	int x_4=0;
	int x_5=0;
	int x_7=0;
	for(i=m;i<=n;i++)
	{
		if(f(i)%4==0)
		{
			x_4++;
		}
		if(f(i)%5==0)
		{
			x_5++;
		}
		if(f(i)%7==0)
		{
			x_7++;
		}
	}
	printf("%d %d %d",x_4,x_5,x_7);
	return 0;
}
