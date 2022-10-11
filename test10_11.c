#include<stdio.h>
void bubble_sort(int arr[], int sz)//升序冒泡
{
    int i=0, j=0,tmp=0;
    for (j = 0; j <= sz - 2; j++)
    {
        for (i = 0; i < j; i++)
        {
            int k = 0;
            ifswap(k);
            if (ifswap == 0)
            {
               
                if (arr[i] > arr[i + 1])
                {
                    tmp = arr[i + 1];
                    arr[i + 1] = arr[i];
                    arr[i] = tmp;
                    k = 1;
                }
            }
        }
    }
}

int ifswap(int k)//优化冒泡:滤过无效排序
{
    if (k == 1)
        return 1;
    if (k == 0)
        return 0;

}

int main()
{
    int arr[] = { 9,10,12,45,2,6,3,48,102 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz);
    for (int i = 0; i <= sz - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}