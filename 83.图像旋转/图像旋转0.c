#include<stdio.h>
int main()
{
	int arr[100][100]={0};
	int n=0,m=0;
	int i=0;
	int j=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			printf("%d ",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}


