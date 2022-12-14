#include<stdio.h>
#include<math.h>
int prime_number(int n)
{
	int i=0;
	if(n==1)
	{
	 	return 0;
	}
	if(n==2)
	{
		return 1;
		
	}
	for(i=2;i<=sqrt(n);i++)
 	{
		if(n%i==0)
		return 0;           
    } 
	return 1;
}
int main()
{
	int n=0;
	int i=0;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(prime_number(i)==1 && prime_number(n-i)==1)
		{
			printf("%d %d",i,n-i);
			break;
		}
	}
	return 0;
}
