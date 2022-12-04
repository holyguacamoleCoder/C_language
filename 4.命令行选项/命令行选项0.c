#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0;
	char str[100];
	char str0[100];
	gets(str);
	int len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]=='-')
		{
			str0[j]=str[i+1];
			j++;
		}		
	}
	int len0=j;
	if(len0==0)
	{
		printf("no");
	}
	else
	{
		for(i=0;i<len0-1;i++)
		{
			for(j=0;j<len0-1;j++)
			{
				if(str0[j]>str0[j+1])
				{
					char tmp=str0[j];
					str0[j]=str0[j+1];
					str0[j+1]=tmp;
					
				}
			}
		}
		for(i=0;i<len0;i++)
		{
			if(str0[i]==str0[i+1])
			continue;
			else
			printf("-%c ",str0[i]);
		}	
	}
}
