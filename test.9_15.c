#define _CRT_SECURE_NO_WARNINGS 1
//µ›πÈ∞¥Œª¥Ú”°
#include<stdio.h>
void  print(unsigned int x)
{
	if (x > 9)
	{
		print(x / 10);
	}
	printf("%d ", x % 10);
}

int main()
{
	unsigned int a = 0;
	scanf("%d", &a);
	print(a);
	return 0;
}