#define _CRT_SECURE_NO_WARNINGS 1
//模拟用户登录
#include<string.h>
#include<stdio.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };//假定密码已经设置为123456
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码（您共有3次机会）：");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功");
			break;
		}
		else
		{
			printf("密码错误，请再次尝试\n");
		}
	}
	if (i == 3)
	{
		printf("错误输入密码三次，程序退出\n");
	}
	return 0;
}