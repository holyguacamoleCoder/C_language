#include<stdio.h>
int main()
{
	double Fe = 7.86,Au=19.3,PI=3.1415926;
	int D1, D2;
	scanf("%d %d", &D1, &D2);
	double m1 = (1 / 6.0) * PI * D1 * D1 * D1 * Fe / 1000;
	double m2 = (1 / 6.0) * PI * D2 * D2 * D2 * Au / 1000;
	printf("%.3f %.3f", m1,m2);
	return 0;
}
