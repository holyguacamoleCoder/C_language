#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
    int arr[10] = { 1,3,-9,6,4,10,8,-2,13,25 };
    int i = 0;
    int max = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);
    return;
}