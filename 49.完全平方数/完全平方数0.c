#include<stdio.h>
#include<math.h>
int main()
{
	double n=0;
	scanf("%lf",&n);
	if((int)sqrt(n)==sqrt(n))
	{
		printf("%d",(int)sqrt(n));
	}
	else
	{
		printf("no");
	}
	return 0;
}
