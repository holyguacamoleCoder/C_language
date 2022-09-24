#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//冒泡排序
void bubble_sort(int arr[], int sz)
{
    //加上循环:
    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        //跑一趟的程序
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                //交换
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//排为升序
    int sz = sizeof(arr) / sizeof(arr[0]);
   // printf("%p", &arr);
    for (int k = 0; k < 10; k++)
    {
        printf("%d ", arr[k]);
    }
	bubble_sort(arr,sz);
    printf("\n");
   // printf("%p ",&arr);
    for (int k = 0; k < 10; k++)
    {
        printf("%d ", arr[k]);
    }
	return 0;
}