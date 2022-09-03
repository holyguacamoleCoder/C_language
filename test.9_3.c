#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//Switch初识
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednseday");
			break;
		case 4:
			printf("Thusrday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("worng");
			break;
	}
	return 0;
}
