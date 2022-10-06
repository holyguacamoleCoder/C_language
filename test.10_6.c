#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main()
{
	char c;//被读入的字符
	char pre;//读入准备字符
	int n_lines = 1;//行数
	int n_words = 0;//单词数
	int n_chars = 0;//字符数
	bool inword =false;//判断是否在单词中0/1
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