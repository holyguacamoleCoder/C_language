#define _CRT_SECURE_NO_WARNINGS 1
//��ŵ������
#include<stdio.h>
void hanoi_tower(int n, char x, char y, char z)
{
	static int count = 0;//��֤��̬������
	if (n > 1)
	{
		hanoi_tower(n - 1, x, z, y);//����n-1��pan��x����z��y
		printf("%c->%c	%d\n", x, z,++count);//����n���̴�xֱ�ӵ�z
		hanoi_tower(n - 1, y, x, z);//����n-1���̴�y����x��z
	}
	else
	{
		printf("%c->%c	%d\n", x, z,++count);
	}
}
int main()
{
	int n = 0;
	printf("���뺺ŵ��������");
	scanf("%d", &n);
	hanoi_tower(n, 'X', 'Y', 'Z');
	return 0;
}