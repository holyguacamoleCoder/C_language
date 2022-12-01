#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdarg.h>
//指定数量的值的平均值(不使用数组)
float average(int n_values, ...)
{
	va_list  arg;
	int count=0;
	float sum = 0;
	//访问可变参数
	va_start(arg, n_values);
	//添加取自可变参数列表的值
	for (count = 0; count < n_values; count++)
	{
		sum += va_arg(arg, int);
	}
	//完成处理
	va_end(arg);
	return sum / n_values;
}
int main()
{
	printf("%f",average(3,9,8,7));
	return 0;
}