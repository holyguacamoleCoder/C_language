#include<Stdio.h>
int main()
{
	float n=0;
	int i=0;
	scanf("%f",&n);
	float sum=0;
	for(i=1;i<=n;i++)
	{
		int x=0.0;
		scanf("%d",&x);
		sum+=x;
	}
	printf("%.2f",sum/n);
	return 0;
}
