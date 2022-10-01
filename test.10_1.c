#define _CRT_SECURE_NO_WARNINGS 1
//关机程序
//写入cmd中执行：
//shutdown -s -t 180     设置180秒之后关机
//shutdown -a
//system()  执行系统命令
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char input[20] = { 0 };
    system("shutdown -s -t 60");
    printf("提示：你的电脑将在三分钟之后关机，输入‘取消关机’来取消\n");
        again :
    scanf("%s", input);
    if (strcmp(input, "取消关机") == 0)
    {
        system("shutdown - a");
    }
    else
    {
        printf("输入错误，在时间结束前你还有机会\n");
            goto again;
    }

    return 0;
}
