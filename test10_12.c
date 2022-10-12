#include<stdio.h>
void swap(int* a, int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}


void printf_arr(int str[], int n)
{
    int i;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", str[i]);
    }
}
void select_sort(int str[], int n)
{
    int i, j, min;
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (str[j] < str[min])
            {
                min = j;
            }
        }
        swap(&str[i], &str[min]);
       
    }
}


int main()
{
    int arr[] = { 9,10,12,45,2,6,3,48,102 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    select_sort(arr, sz);
    printf_arr(arr, sz);
    return 0;
}