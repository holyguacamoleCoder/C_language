#include<stdio.h>
int main()
{
	int m,n,a[100][100];
	int i,j,sum=0,max=0,maxi,maxj;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==1)
			{
				
				sum++;
				if(sum>max)
				{
					max=sum;
					maxj=j;
					maxi=j-max+1;
				}
				
			}
			else{
				sum=0;
			}
		}
		if(max>0)
				printf("%d %d\n",maxi,maxj);
			else
				printf("-1 -1\n");
			sum=0;max=0;maxi=0;maxj=0;
	}
}
