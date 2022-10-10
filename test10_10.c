#define _CRT_SECURE_NO_WARNINGS 1
#define Base_salary 10.00
#define Base_tax 0.15
#define Extra_tax 0.2
#define Exceed_tax 0.25

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
	printf(" 3)$10.00/hr                           4)$11.20/hr               \n");
	printf(" 5)quit                                                         \n");
	printf("****************************************************************\n");

}


void calc_salary(float hr, float hours)
{
	//计算程序
	float wages=0, taxes=0, net_income=0;
	if (hours <= 30)
	{
		wages = hours * Base_salary;
		taxes = wages * Base_tax;
		net_income = wages - taxes;
	}
	else if (hours >= 40)
	{
		wages = 40 * Base_salary+1.5*(hours-40)*Base_salary;
		if (wages <= 450)
		{
			taxes = 300 * Base_tax + (wages - 300) * Extra_tax;
		}
		else
			taxes = 300 * Base_tax + 150 * Extra_tax + (wages - 450) * Exceed_tax;
		net_income = wages - taxes;
	}
	else
	{
		wages = hours * Base_salary;
		taxes = 300 * Base_tax + (wages - 300) * Extra_tax;
		net_income = wages - taxes;
	}
	printf("工资总额：%f\n", wages);
	printf("税金：%f\n", taxes);
	printf("总收入：%f\n", net_income);
}


int main()
{
	int selection;
	float hours;
	while (1)
	{
		menu();
		printf(" please select>\n");
		scanf("%d", &selection);
		switch (selection)
		{
			case 1:
				printf("Hello!You select $8.75/hr.Enter the work hours: ");
				scanf("%f", &hours);
				calc_salary(8.75, hours);
				break;
			case 2:
				printf("Hello!You select $9.33/hr.Enter the work hours: ");
				scanf("%f", &hours);
				calc_salary(9.33, hours);
				break;
			case 3:
				printf("Hello!You select $10.00/hr.Enter the work hours: ");
				scanf("%f", &hours);
				calc_salary(10.00, hours);
				break;
			case 4:
				printf("Hello!You select $11.20/hr .Enter the work hours: ");
				scanf("%f", &hours);
				calc_salary(11.20, hours);
				break;
			case 5:
				printf("quit\n");
				break;
			default:
				printf("Error selected!please retry!\n");
				break;
		}
	}
			
			

			
		
	return 0;
}