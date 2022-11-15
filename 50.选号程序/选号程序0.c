#include<stdio.h>
int main()
{
	int n=0;
	int i=0;
	int j=0;
	int t=0;
	int arr[100]={0};
	int padd[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)//输入号码
	{
		scanf("%d",&arr[i]);
	}
	for(j=0;j<n;j++)//计算各位之和
	{
		int sum=0;
		t=arr[j];
		do
		{
			sum+=t%10;
			t/=10;
		}while(t!=0);
		padd[j]=sum;
	}
	int max=0;
	int k=0;
	for(k=1;k<n;k++)//比较各位之和
	{
		if(padd[k]>padd[max])
			max=k;
		else if(padd[k]==padd[max])
			if(arr[k]>arr[max])
				max=k;
	}
	printf("%d",arr[max]);
	return 0;
}
