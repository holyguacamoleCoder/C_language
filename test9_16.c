#define _CRT_SECURE_NO_WARNINGS 1
//编写函数，不允许创建临时变量，求字符串长度
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