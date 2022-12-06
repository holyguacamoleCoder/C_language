#include<stdio.h>
struct coordinate
{
	int x1,y1,x2,y2;
};
int main()
{
	int n=0,i=0,j=0,k=0,sum=0;
	int arr[100][100]={0};
	struct coordinate C[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)//输入坐标
	{
		scanf("%d%d%d%d",&C[i].x1,&C[i].y1,&C[i].x2,&C[i].y2);
	}
	for(k=0;k<n;k++)//填充|画图
	{
		for(i=C[k].x1;i<C[k].x2;i++)
		{
			for(j=C[k].y1;j<C[k].y2;j++)
			{
				arr[i][j]=1;	
			}
		}
	}
	for(i=0;i<100;i++)//计算面积
	{
		for(j=0;j<100;j++)
		{
			sum+=arr[i][j];
		}
	}
	printf("%d",sum);
	return 0;
}
