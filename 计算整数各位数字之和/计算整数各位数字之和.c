#include<stdio.h>
int cut_sum(int n)
{
	static int sum=0;
    if(n>9)
    {
		cut_sum(n/10);
	}
	sum+=n%10;
	return sum;
}
int main()
{
	int n=0;
	scanf("%d",&n);
	int sum=0;
	printf("%d",cut_sum(n));
	return 0;
}
