#include<stdio.h>
void gcd(int a,int b)
{
	if(a==0 && b!=0)
	{
		printf("%d",b);
	}
	else if(b==0 && a!=0) 
	{
		printf("%d",a);
	}
	else if(a==0 && b==0)
	{
		printf("0");
	}
	else
	{
		int t=0;
		int gcd=0;
		while(t=a%b)
		{
			a=b;
			b=t;
		}
		printf("%d",b);	
	}
}
int main()
{
	int a=0;
	int b=0;
	scanf("%d %d",&a,&b);
	gcd(a,b);
	return 0;
}
