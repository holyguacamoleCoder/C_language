#include<stdio.h>
int main()
{
	float power=0;
	float tax=0;
	scanf("%f",&power);
	if(power<=110)
	{
		tax=0.5*power;
	}
	else if(power>110 && power<=210)
	{
		tax=55+0.55*(power-110);
	}
	else
	{
		tax=110+0.70*(power-210);
	}
	printf("%.2f",tax);
	return 0;
}
