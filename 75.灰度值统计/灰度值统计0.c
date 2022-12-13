#include<stdio.h>
int main()
{
	int m=0,n=0;
	int i=0,j=0;
	scanf("%d%d",&m,&n);
	int img[256][256];
	int a[256]={0};
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&img[i][j]);
			a[img[i][j]]++;
		}
	}
	for(i=0;i<256;i++)
	{
		if(a[i]!=0)
		{
			printf("%d %d\n",i,a[i]);
		}
	}
	return 0;
}
