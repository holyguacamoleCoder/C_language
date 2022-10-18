#include<stdio.h>
int main()
{
	int a,b,c,C;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c && b+c>a && a+c>b && a-b<c && b-c<a && a-c<b)
	{
		C=a+b+c;
		printf("%d",C);
	}
	else
	{
		printf("No");
	}
	return 0;
}
