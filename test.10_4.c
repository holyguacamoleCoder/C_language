#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
    //strcpy£¨string copy×Ö·û´®¿½±´£©
    //strcpy(destination£¬resource)
    char arr1[] = { 0 };
    char arr2[] = "hello bit";
    strcpy(arr1, arr2);
    printf("%s", arr1);
    //memset(memory settingÄÚ´æÉèÖÃ)
    //memset(vaule*prt,int vaule,set_t num)
    char arr[] = "hello bit!!!";
    memset(arr, 'x', 5);
    return 0;
}

