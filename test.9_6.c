#define _CRT_SECURE_NO_WARNINGS 1
//���ֲ���
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };//��֪Ϊ��������
	int k = 0;
	scanf("%d", &k);//kΪҪ���ҵ���
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
			printf("�ҵ���Ŀ�꣬�±��ǣ�%d", mid);
			break;
		}
	}
	while (left > right)
	{
		printf("�޷��ڸ��������ҵ�Ŀ��");
		break;
	}
	return 0;
}