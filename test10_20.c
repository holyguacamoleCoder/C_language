//���������
#include<stdio.h>
int main()
{
    int guess = 0;
    printf("Please pick an integer from 0 to 100.\nI will try to guess it.\n");
    printf("Respond with a y if my guess is right");
    printf(",and a n if it is wrong\n");
    printf("Is %d?\n", guess);

    char response;
    while ((response = getchar()) != 'y')  //������Ӧ    //����no֧��
    {
        if (response == 'n')
        {
            printf("Oh,i'm wrong.Well,then,is it %d?\n", ++guess);
        }
        else   //ɸѡӦ����������   ----if else
        {
            printf("Sorry,please respond with  an right format!\n");
        }
        while ((getchar()) != '\n')
            continue;       //ɸѡ��n��\n�ĳ�ͻ
    }
    printf("I know I coould do it!\n");     //�ﵽyes֧�ߣ�����
    return 0;
}