#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int part = 0;
	int depart = -1;
	int arr[1000] = { 0 };
	int sum[1000] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)//输入数列
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)//数列分段
	{
		if (arr[i] != arr[i + 1])
		{
			sum[part] = arr[i] * (i - depart);//储存每段之和
			depart = i;//记录断截点
			part++;
		}
	}
	printf("%d ", part);//打印段数
	int max = 0;//先假设第一项最大，max为下标
	for (j = 0; j < part; j++)//选择排序找出最大值
	{
		printf("%d ", sum[j]);//顺便就把各项和打印出来（也可以再写一个循环
		if (sum[max] <= sum[j])
		{
			max = j;
		}
	}
	printf("%d", sum[max]);
	return 0;
}
