#include<stdio.h>
int main()
{
	int n=0;
	int k=0;
	int i=0;
	int flag=0;
	int arr[100];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]==k)
		{
			printf("%d ",i);
			flag=1;
		}
	}
	if(flag==0)
	{
		printf("%d",-1);
	}
	return 0;
}
