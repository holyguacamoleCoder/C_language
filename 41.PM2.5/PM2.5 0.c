#include<stdio.h>

int main()
{
	int n=0;
	int Pi[101]={0};
	int i=0;
	int sum=0;
	int Grade1=0;
	int Grade2=0;
	int Grade3=0;
	int Grade4=0;
	int Grade5=0;
	int Grade6=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&Pi[i]);
		sum+=Pi[i];
		//judge_G(Pi[i],Grade1,Grade2,Grade3,Grade4,Grade5,Grade6);
			if(Pi[i]>=0 && Pi[i]<=50)
				Grade1++;
			else if(Pi[i]>=51 && Pi[i]<=100)
				Grade2++; 
			else if(Pi[i]>=101 && Pi[i]<=150)
				Grade3++; 
			else if(Pi[i]>=151 && Pi[i]<=200)
				Grade4++; 
			else if(Pi[i]>=201 && Pi[i]<=300)
				Grade5++;
			else if(Pi[i]>300)
				Grade6++;  
	}
	float Pi_a=sum*1.00/n;
	printf("%.2f\n",Pi_a);
	printf("%d %d %d %d %d %d",Grade1,Grade2,Grade3,Grade4,Grade5,Grade6);
	return 0;
}
