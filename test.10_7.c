#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void calc_salary(int slection)
//{
//	float wages, taxes, net_income;
//}
void menu()
{
	printf("****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action\n");
	printf(" 1)$8.75/hr                           2)$9.33/hr                \n");
	printf(" 3)10.00/hr                           4)$11.20/hr               \n");
	printf(" 5)quit                                                         \n");
	printf("****************************************************************\n");

}
int main()
{
	int selection;
	printf(" please select>\n");
	menu();
	scanf("%d", &selection);
	while (1)
	{
		if (selection >= 0 && selection <= 4)
		{
			//����������ȷѡ��
		
			//�������
			/*calc_salary(slection);
			printf("�����ܶ%f", wages);
			printf("˰��%f", taxes);
			printf("�����룺%f", net_income);*/
		}
		else if (selection == 5)
		{
			printf("quit\n");
			break;
		}
		else
		{
			printf("Error selected!please retry!\n");
		}
	}
	return 0;
}