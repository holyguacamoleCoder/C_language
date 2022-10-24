#include<stdio.h>
int multi(int n,int m)
{
	int i=0;
	int count=0;
	for(i=m;i<=n;i+=m)
	{
		count++;
	}
	return count ;
}
int main()
{
	int n=0;
	scanf("%d",&n);
	int odd_n=0;
	int even_n=0;
	if(n%2==0)
	{
		odd_n=even_n=n/2;
	}
	else if(n%2==1)
	{
		odd_n=(n+1)/2;
		even_n=(n-1)/2;
	}
	int c1=multi(n,3);
	int c2=multi(n,5);
	int c3=multi(n,7);
	printf("%d %d %d %d %d",odd_n,even_n,c1,c2,c3);
	return 0;
}
