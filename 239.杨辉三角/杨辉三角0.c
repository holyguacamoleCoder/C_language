#include<stdio.h>
void yanghui_tri(int n)
{
	int i=0;
	int j=0;
	int arr[10][10]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			arr[i][j]=1;
			//printf("%d ",arr[i][j]);
		}
		//printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j>0 && j<i)
			{
				arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
			}
			printf("%d ",arr[i][j]);
		}
		if(i<n-1)
		{
			printf("\n");
		}
	}
}
int main()
{
	int n=0;
	scanf("%d",&n);
	yanghui_tri(n);
	return 0;
}
