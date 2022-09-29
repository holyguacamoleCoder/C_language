#define _CRT_SECURE_NO_WARNINGS 1
//汉诺塔问题
#include<stdio.h>
void hanoi_tower(int n, char x, char y, char z)
{
	static int count = 0;//保证静态化计数
	if (n > 1)
	{
		hanoi_tower(n - 1, x, z, y);//将第n-1个pan从x借助z到y
		printf("%c->%c	%d\n", x, z,++count);//将第n个盘从x直接到z
		hanoi_tower(n - 1, y, x, z);//将第n-1个盘从y借助x到z
	}
	else
	{
		printf("%c->%c	%d\n", x, z,++count);
	}
}
int main()
{
	int n = 0;
	printf("输入汉诺塔层数：");
	scanf("%d", &n);
	hanoi_tower(n, 'X', 'Y', 'Z');
	return 0;
}