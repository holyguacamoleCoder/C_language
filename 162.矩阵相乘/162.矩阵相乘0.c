#include<stdio.h>
//2*3   与     3*2
void matrix_multiply(int *A,int *B,int *C) 
{
//	for(i=0;i<2;i++)  //二维
//	{
//		for(j=0;j<2;j++)
//		{
//			for(k=0;k<3;k++)
//			{
//				c[i][j]=c[i][j]+a[i][k]*b[k][j];
//			}
//		}
//	}	
	int *t1;
	int *t2;
	int i=0;
	int j=0;
	int k=0;
	for(i=0;i<2;i++)  //一维
	{
		for(j=0;j<2;j++)
		{
			t1=A+i*3;
			t2=B+j;
			*C=0;
			for(k=0 ;k<3;k++)
			{
				*C+=(*t1)*(*t2);
				t1++;
				t2+=2;
			}
			C++;
		}
	}
}
	
int main()
{
	int i=0;
	int A[6]={0};
	int B[6]={0};
	int C[4]={0};
	for(i=0;i<6;i++)//输入A
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<6;i++)//输入B
	{
		scanf("%d",&B[i]);
	}
	for(i=0;i<6;i++)//输出A
	{
		printf("%d ",A[i]);
		if((i+1)%3==0)
		printf("\n");
	}
	printf("\n");
	for(i=0;i<6;i++)//输出B
	{
		printf("%d ",B[i]);
		if((i+1)%2==0)
		printf("\n");
	}
	printf("\n");
	matrix_multiply(A,B,C); //计算C
	for(i=0;i<4;i++)//输出C
	{
		printf("%d  ",C[i]);
		if((i+1)%2==0)	
		printf("\n");
	}
	return 0;
}
