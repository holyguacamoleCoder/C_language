#define _CRT_SECURE_NO_WARNINGS 1
//��д����������������ʱ���������ַ�������
# include <stdio.h>
int rule_str(char* str)
{
  if ('\0' != *str)
    {
        return 1 + rule_str(str + 1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    char arr[] = "bit";
    //'b','i','t','\0'
    int ret=rule_str(arr);
    printf("%d", ret);
       
    return 0;
}