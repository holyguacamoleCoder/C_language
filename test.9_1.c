#define _CRT_SECURE_NO_WARNINGS 1
//strlen,sizeof�ĳ���ʹ��
#include<stdio.h>
#include<string.h>
int main()
{
	//sizeof():���������͵ĳ���
	int a = 0;
	long b = 11541;
	printf("sizeof(a)\n");
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(b));
	//strlen()�����ַ����ĳ���
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};
	int len = strlen(arr1);
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}
