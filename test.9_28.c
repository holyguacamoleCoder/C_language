#define _CRT_SECURE_NO_WARNINGS 1
//ģ��strcmp
//int strcmp(const char*s1,const char*s2)
//return -1��С�ڣ�   0�����ڣ�   1�����ڣ�
#include<string.h>
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char const* str2)
{
	assert(str1&& str2);
	//�Ƚ����
	//���ڣ������Լ�����
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
	//����
	//С��
}

int main()
{
	char arr1[] = "123";
	char arr2[] = "1234";
	char arr3[] = "1234";
	char arr4[] = "123456";
	printf("%d\n", my_strcmp(arr2, arr1));
	printf("%d\n", my_strcmp(arr3, arr2));
	printf("%d\n", my_strcmp(arr1, arr4));


	//�Ա�
	printf("%d\n", strcmp(arr2, arr1));
	printf("%d\n", strcmp(arr3, arr2));
	printf("%d\n", strcmp(arr1, arr4));

}