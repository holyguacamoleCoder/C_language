#include<stdio.h>
struct student
{
	int k;
	int h1,h2;
	int s1,s2;
	int min;
}; 
int main()
{
	int n,i,j,k,sign=0;
	scanf("%d",&n);
	struct student s[101];
	//初始化
	for(i=0;i<101;i++)
	{
		s[i].k=0;
		s[i].min=0;
	}
	//输入数据
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);	
		if(s[k].k==0) sign++;//判断有效数据
		s[k].k=k;
		scanf("%d:%d %d:%d",&s[k].h1
						   ,&s[k].h2
						   ,&s[k].s1
						   ,&s[k].s2);
		s[k].min+=s[k].s1*60+s[k].s2-(s[k].h1*60+s[k].h2);
	}
	//处理
	for(i=0;i<101;i++)
    {
    	for(j=0;j<100;j++)
    	{
    		if(s[j].min<s[j+1].min||(s[j].min==s[j+1].min&&s[j].k>s[j+1].k))
    		{
    			struct student tmp=s[j];
                s[j]=s[j+1];
                s[j+1]=tmp;
			}
		}
	}
	//处理
	for(i=0;i<sign;i++)
	{
		printf("%d %d\n",s[i].k,s[i].min);
	}
}
