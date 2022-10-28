#include<stdio.h>
int main()
{
	int n=0;
	int a=0;
	int b=0;
	int c=0;
	scanf("%d",&n);
	for(a=0;a<10;a++)
		for(b=0;b<10;b++)
			for(c=0;c<10;c++)
			{
				if((101*(a+c)+20*b)==n)
				{
					printf("%d %d %d\n",a,b,c);
				}
			}
	return 0;
}
