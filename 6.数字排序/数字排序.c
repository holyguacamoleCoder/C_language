#include<stdio.h>
int sump(int m)
{
	int t = m;
	int sum = 0;
	do {
		sum += t % 10;
		t /= 10;
	} while (t != 0);
	return sum;
}
void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	int arr[1000] = { 0 };
	int sum[1000] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		sum[i] = sump(arr[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (sum[j] < sum[j + 1])
			{
				swap(&arr[j],&arr[j + 1]);
				swap(&sum[j],&sum[j + 1]);
			}
			else if(sum[j] == sum[j + 1])
			{
				if (arr[j] > arr[j + 1])
							{
								swap(&arr[j],&arr[j + 1]);
								swap(&sum[j],&sum[j + 1]);
							}
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d %d\n", arr[i], sum[i]);
	}
	return 0;
}
