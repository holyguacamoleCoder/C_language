#include<stdio.h>
int main()
{
	int m=0;
	int n=0;
	scanf("%d %d",&m,&n);
	int gcf=m;
	int lcm=n;
	if(gcf>=lcm)
	{
		int tmp=gcf;
		gcf=lcm;
		lcm=tmp;
	}
	while(1)//���Լ��
	{
		if(m%gcf==0 && n%gcf==0)
			break;
		else
			gcf--;
	}
	while(1)//��С������
	{
		if(lcm%m==0 && lcm%n==0)
			break;
		else
			lcm++;
	}
	printf("%d %d",gcf,lcm);
	return 0;
}
