#define _CRT_SECURE_NO_WARNINGS 1
//��дһ�����룬��ʾ����ַ����������м��ƶ�
#include<string.h>
#include<stdio.h>
#include<windows.h>
int main()
{
	char arr1[] = "################";
	char arr2[] = "welcome to C !!!";
	int left = 0;
	int right = strlen(arr2) - 1;
	while (left <= right)
	{
		arr1[left] = arr2[left];
		arr1[right] = arr2[right];
		printf("%s", arr1);
		Sleep(800);
		system("cls");
		left++;
		right--;

	}
	printf("%s", arr1);
	return 0;
}