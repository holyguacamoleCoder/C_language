#include<stdio.h>

int main()
{
	int n,i=0;
	scanf("%d",&n);
	double S=0.0,h=100.0;
	while(i<n)
	{
		S+=h;
		h/=2.0;
		S+=h;
		i++;
	}
	S-=h;
	printf("S=%.3lf h=%.3lf",S,h);
	return 0;
}
