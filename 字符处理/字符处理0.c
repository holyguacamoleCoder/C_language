#include<stdio.h>
int main()
{
	char al='0';
	scanf("%c",&al);
	if(al>=65 && al<=90)
	{
		printf("%c",al+32);
	}
	else if(al>=91 && al<=122)
	{
		printf("%c",al-32);
	}
	else
	{
		printf("%c",al); 
	}
	return 0;
}
