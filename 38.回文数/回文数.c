#include<stdio.h>
#include<math.h>
int reverse(int n)
{
	int m=0;
	int t=n;
	do
	{
		m=m*10+t%10;
		t/=10;
	}while(t!=0);
	return m;
}
int main()
{
	int n=0;
	scanf("%d",&n);
	if(n==reverse(n))
	{
		int sum=0;
		int t=n;
		do
		{
			sum+=t%10;
			t/=10;
		}while(t!=0);
		printf("%d",sum);
	}
	else
	{
		printf("no");
	}
}
