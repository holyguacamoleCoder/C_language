#define _CRT_SECURE_NO_WARNINGS 1
//�ػ�����
//д��cmd��ִ�У�
//shutdown -s -t 180     ����180��֮��ػ�
//shutdown -a
//system()  ִ��ϵͳ����
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char input[20] = { 0 };
    system("shutdown -s -t 60");
    printf("��ʾ����ĵ��Խ���������֮��ػ������롮ȡ���ػ�����ȡ��\n");
        again :
    scanf("%s", input);
    if (strcmp(input, "ȡ���ػ�") == 0)
    {
        system("shutdown - a");
    }
    else
    {
        printf("���������ʱ�����ǰ�㻹�л���\n");
            goto again;
    }

    return 0;
}
