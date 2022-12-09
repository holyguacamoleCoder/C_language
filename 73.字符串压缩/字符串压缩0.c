#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	int j=0;
	int count=0;
	char str[50]={0};
	scanf("%s",str);
	int len=strlen(str);
	for(i=0;i<len;)
	{
		char tmp=str[i];
		printf("%c",str[i]);
		i++;
		count=0;
		while(str[i]>='0' && str[i]<='9')//回文计数，直接处理掉所有的数字
		{
		
			count=count*10+(str[i]-'0')%10;
			i++;
		}
		for(j=0;j<count-1;j++)//起初已经打印过一次故-1
		{
			printf("%c",tmp);
		}
	}
	return 0;
}
