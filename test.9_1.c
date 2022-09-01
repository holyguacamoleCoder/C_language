#define _CRT_SECURE_NO_WARNINGS 1
//strlen,sizeof的初次使用
#include<stdio.h>
#include<string.h>
int main()
{
	//sizeof():求数据类型的长度
	int a = 0;
	long b = 11541;
	printf("sizeof(a)\n");
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(b));
	//strlen()：求字符串的长度
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};
	int len = strlen(arr1);
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}
