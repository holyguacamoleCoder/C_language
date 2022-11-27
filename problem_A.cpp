#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void print(int x)
{
	int tmp = x;
	int i = 0;
	int arr[32] = { 0 };
	do
	{
		arr[i] = tmp % 2;
		tmp /= 2;
		i++;
	} while (tmp != 0);
	int n = i;
	for (i--; i >=0; i--)
	{
		printf("%d",arr[i]);
	}
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a,&b);
	print(a & b);
	printf("\n");
	print(a | b);
	printf("\n");
	print(a ^ b);
}