#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int num = 1;//������
    int count = 0;
    int i = 0;
    for (i = 0; i <= 31; i++)
    {
        int ret = (num>>i) & 1;
        if (ret == 1)
            count++;
        
    }
    printf("��������1�ĸ�����%d", count);
    return 0;
}
