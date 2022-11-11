#include<stdio.h>
int main()
{
	char p='0';
	scanf("%c",&p);
	int i=0;
	int j=0;
	int k=0;
	int l=0;
	for(i=65;i<=p;i++)
	{
		for(j=p-i;j>0;j--)
		{
			printf(" ");
		}
		for(k=65;k<=i;k++)
		{
			printf("%c",k);
		}
		for(l=i-1;l>=65;l--)
		{
			printf("%c",l);
		}
		printf("\n");
	}
	return 0;
}
