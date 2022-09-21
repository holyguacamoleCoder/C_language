#define _CRT_SECURE_NO_WARNINGS 1
//不使用库函数实现字符串逆序
int rule_strlen(char str)//模拟strlen
{
    int count = 0;
    while (str != '\0')
    {
        str++;
        count++;
    }
    return count;
}
void reverse_str(char* str)//执行逆序
{
    int left = 0;
    int right = rule_strlen(str) - 1;
    while (left < right)
    {
        char tmp =str[left];
        str[left] =str[right];
        str[right] = tmp;
        left++;
        right--;
    }
}
int main()
{
    char arr[] = "abcdef";
    reverse_str(arr);
    printf("%s", arr);//fedcba
    return 0;
}