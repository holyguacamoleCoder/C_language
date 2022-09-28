#define _CRT_SECURE_NO_WARNINGS 1
//模拟strcmp
//int strcmp(const char*s1,const char*s2)
//return -1（小于）   0（等于）   1（大于）
#include<string.h>
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char const* str2)
{
	assert(str1&& str2);
	//比较语句
	//等于：长度以及内容
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
	//大于
	//小于
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


	//对比
	printf("%d\n", strcmp(arr2, arr1));
	printf("%d\n", strcmp(arr3, arr2));
	printf("%d\n", strcmp(arr1, arr4));

}