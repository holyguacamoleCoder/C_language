//程序猜数字
#include<stdio.h>
int main()
{
    int guess = 0;
    printf("Please pick an integer from 0 to 100.\nI will try to guess it.\n");
    printf("Respond with a y if my guess is right");
    printf(",and a n if it is wrong\n");
    printf("Is %d?\n", guess);

    char response;
    while ((response = getchar()) != 'y')  //处理响应    //处理no支线
    {
        if (response == 'n')
        {
            printf("Oh,i'm wrong.Well,then,is it %d?\n", ++guess);
        }
        else   //筛选应对其他输入   ----if else
        {
            printf("Sorry,please respond with  an right format!\n");
        }
        while ((getchar()) != '\n')
            continue;       //筛选掉n与\n的冲突
    }
    printf("I know I coould do it!\n");     //达到yes支线，结束
    return 0;
}