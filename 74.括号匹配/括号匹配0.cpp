#include<stdio.h>
#include<string.h>

int main()
{
	char str[50]={0};
	scanf("%s",str);
	int i=0;
	int k1=1,k2=1,k3=1;
	int len=strlen(str);
	for(i=0;i<len;i++)
	{
		switch(str[i])
		{
			case '(':k1--;break;
			case '[':k2--;break;
			case '{':k3--;break;
			case ')':k1++;break;
			case ']':k2++;break;
			case '}':k3++;break;
			default:break;
		}
	}
		if((k1==1)&&(k2==1)&&(k3==1))
		printf("yes");
		else
		printf("no");
	return 0;
}
