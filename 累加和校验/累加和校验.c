#include<stdio.h>
int main()
{
	int i=0;
	int sum=0;
	char arr[101]={'\0'};
	gets(arr);
	while(arr[i]!='\0')
	{
		sum+=arr[i];
		i++;
	}
	printf("%d",sum&0xFF);
	return 0;
}
