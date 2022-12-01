#include<stdio.h>
int main()
{
	int N=0;
	float sum=0;
	int i=0;
	int sign=-1;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		if(i%2==1)
		sum+=i/(2.0*i-1);
		else
		sum=sign*i/(2.0*i-1)+sum;
	}
	printf("%.3f",sum);
	return 0;
}
