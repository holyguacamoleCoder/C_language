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
	for (i = 0; i < n; i++)//��������
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)//���зֶ�
	{
		if (arr[i] != arr[i + 1])
		{
			sum[part] = arr[i] * (i - depart);//����ÿ��֮��
			depart = i;//��¼�Ͻص�
			part++;
		}
	}
	printf("%d ", part);//��ӡ����
	int max = 0;//�ȼ����һ�����maxΪ�±�
	for (j = 0; j < part; j++)//ѡ�������ҳ����ֵ
	{
		printf("%d ", sum[j]);//˳��ͰѸ���ʹ�ӡ������Ҳ������дһ��ѭ��
		if (sum[max] <= sum[j])
		{
			max = j;
		}
	}
	printf("%d", sum[max]);
	return 0;
}
