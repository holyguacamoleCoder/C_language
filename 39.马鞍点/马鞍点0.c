#include<stdio.h>
int main()
{
	int m=0;
	int n=0;
	int i=0;
	int j=0;
	int flag=0;//判断马鞍点
	scanf("%d %d",&m,&n);
	int arr[100][100]={0};
	int row[100]={0};
	int col[100]={0};
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<m;i++)//行最小
	{
		row[i]=arr[i][0];
		for(j=0;j<n;j++)
		{
			if(row[i]>arr[i][j])
			{
				//int tmp=row[i];
				row[i]=arr[i][j];
				//arr[i][j]=tmp;
			}
		}
	}
	for(j=0;j<n;j++)//列最大
	{
		col[j]=arr[0][j];
		for(i=0;i<m;i++)
		{
			if(col[j]<arr[i][j])
			{
				//int tmp=col[j];
				col[j]=arr[i][j];
				//arr[i][j]=tmp;
			}
		}
	}
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(col[j]==arr[i][j] && row[i]==arr[i][j])
				{
					printf("%d %d %d\n",i,j,arr[i][j]);
					flag=1;
				}
			}
		}
	if(flag==0)
	{
		printf("no\n");
	}
	return 0;
}
