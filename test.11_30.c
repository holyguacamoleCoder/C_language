#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdarg.h>
//ָ��������ֵ��ƽ��ֵ(��ʹ������)
float average(int n_values, ...)
{
	va_list  arg;
	int count=0;
	float sum = 0;
	//���ʿɱ����
	va_start(arg, n_values);
	//���ȡ�Կɱ�����б��ֵ
	for (count = 0; count < n_values; count++)
	{
		sum += va_arg(arg, int);
	}
	//��ɴ���
	va_end(arg);
	return sum / n_values;
}
int main()
{
	printf("%f",average(3,9,8,7));
	return 0;
}