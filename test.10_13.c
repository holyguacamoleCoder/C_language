#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int t;
	float s, m;
	scanf("%f %d", &s, &t);
	if (s <= 3)
	{
		m = 10 + 2 * t / 5;
		printf("%.0f", m);
	}
	else if (s > 3 && s <= 10)
	{
		m = 2 * s + 4 + 2 * t / 5;
		printf("%.0f", m);
	}
	else
	{
		m = 3 * s - 6 + 2 * t / 5;
		printf("%.0f", m);
	}
	return 0;
}