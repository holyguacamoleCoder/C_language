#define _CRT_SECURE_NO_WARNINGS 1
//递归逆序打印（不使用库函数）
#include<stdio.h>
int rule_strlen(char* str)
{
    if ('\0' != *str)
    {
        return 1 + rule_strlen(str + 1);
    }
    else
    {
        return 0;
    }
}
void reverse_str(char* str)//执行逆序
{
    char tmp = *str;//1
    int len = rule_strlen(str);
    *str = *(str + len - 1);//2
    *(str + len - 1) = '\0';//3
    if (rule_strlen(str + 1) >= 2)//4
    {
        reverse_str(str + 1);
    }
    *(str + len - 1) = tmp;//5
}
int main()
{
    char arr[] = "abcdef";
    reverse_str(arr);
    printf("%s", arr);//fedcba
    return 0;
}