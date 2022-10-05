#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a, b, c, d, e, h, i, j, k;
	scanf("%c%c%c%c%c%c%c%c%c", &a, &h, &b, &i, &c, &j, &d, &k, &e);
	printf("%c%c%c%c%c!", a + 32, b + 32, c + 32, d + 32, e + 32);
	return 0;
}