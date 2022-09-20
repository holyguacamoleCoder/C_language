#define _CRT_SECURE_NO_WARNINGS 1
//猜字游戏
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("**********************\n");
	printf("********0.play********\n");
	printf("********1.exit********\n");
	printf("**********************\n");

}

void game()
{
	int ret = rand()%100+1;
	//printf("%d", ret);
	int guess = 0;
	while (1)
	{
		printf("请输入你猜的数\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
			continue;
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
			continue;
		}
		else if (guess == ret)
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	//打印菜单
	
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择(0/1):");
		scanf("%d", &input);
		if (input== 0)//进入游戏：
		{
			printf("进入游戏\n");
			game();
			break;
		}
		else if (input == 1)//退出游戏：
		{
			printf("退出游戏\n");
			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
			continue;
		}
	} while (input);
	return 0;
}