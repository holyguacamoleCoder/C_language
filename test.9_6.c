#define _CRT_SECURE_NO_WARNINGS 1
//二分查找
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };//已知为有序数组
	int k = 0;
	scanf("%d", &k);//k为要查找的数
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid;
			right--;
		}
		else if (arr[mid] > k)
		{
			right = mid;
			left++;
		}
		else
		{
			printf("找到了目标，下标是：%d", mid);
			break;
		}
	}
	while (left > right)
	{
		printf("无法在该数组内找到目标");
		break;
	}
	return 0;
}