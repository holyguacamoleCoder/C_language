#include<stdio.h>
void cacul_money(int x)
{
	int a,b,c,d,e,f;
	a=x/100;
	b=(x-(100*a))/50;
	c=(x-(100*a)-(50*b))/20;
	d=(x-(100*a)-(50*b)-(20*c))/10;
	e=(x-(100*a)-(50*b)-(20*c)-(10*d))/5;
	f=(x-(100*a)-(50*b)-(20*c)-(10*d)-(5*e))/1;
	printf("%d %d %d %d %d %d",a,b,c,d,e,f);
}
int main()
{
	int salary;
	scanf("%d",&salary);
	cacul_money(salary);
	return 0;
}
