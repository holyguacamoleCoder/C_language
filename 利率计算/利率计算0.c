#include<stdio.h>
#include<math.h>
int main()
{
	float r,n,p=1;
	scanf("%f %f",&r,&n);
	p=pow((1+r),n);
	printf("%.2f",p);
	return 0;
}
