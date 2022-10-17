#include<stdio.h>
int caculate(int a)
{
	int c,d,e;
	c=a/100;
	d=(a-c*100)/10;
	e=(a-c*100-d*10);
	return c+d+e;
}
int main()
{
	int a,b;
	scanf("%d",&a);
	b=caculate(a);
	printf("%d",b);
	return 0;
}
