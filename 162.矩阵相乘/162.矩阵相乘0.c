#include<stdio.h>
//2*3   ��     3*2
void matrix_multiply(int *A,int *B,int *C) 
{
//	for(i=0;i<2;i++)  //��ά
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
	for(i=0;i<2;i++)  //һά
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
	for(i=0;i<6;i++)//����A
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<6;i++)//����B
	{
		scanf("%d",&B[i]);
	}
	for(i=0;i<6;i++)//���A
	{
		printf("%d ",A[i]);
		if((i+1)%3==0)
		printf("\n");
	}
	printf("\n");
	for(i=0;i<6;i++)//���B
	{
		printf("%d ",B[i]);
		if((i+1)%2==0)
		printf("\n");
	}
	printf("\n");
	matrix_multiply(A,B,C); //����C
	for(i=0;i<4;i++)//���C
	{
		printf("%d  ",C[i]);
		if((i+1)%2==0)	
		printf("\n");
	}
	return 0;
}
