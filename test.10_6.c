#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main()
{
	char c;//��������ַ�
	char pre;//����׼���ַ�
	int n_lines = 1;//����
	int n_words = 0;//������
	int n_chars = 0;//�ַ���
	bool inword =false;//�ж��Ƿ��ڵ�����0/1
	printf("Enter text to be analyzed and '.'to terminate:\n");
	pre = '\n';
	while ((c = getchar()) != '.')
	{
		n_chars++;
		if (c == '\n')
			n_lines++;
		if (!isspace(c) && !inword)
		{
			n_words++;
			inword = true;
		}
		if (isspace(c) && inword)
			inword = false;
	}
	
	printf("chars=%d,lines=%d,words=%d", n_chars, n_lines, n_words);
	return 0;
}