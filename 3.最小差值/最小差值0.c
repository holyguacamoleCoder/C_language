#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=0;
	int i=0;
	int j=0;
	int arr[10000]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min_d=abs(arr[2]-arr[1]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(min_d>abs(arr[j]-arr[i]))
			min_d=abs(arr[j]-arr[i]);
		}
	}
	printf("%d",min_d);
	return 0;
}
