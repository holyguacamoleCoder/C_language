//#include<stdio.h>
//int main()
//{
//	int row=0;
//	int col=0;
//	int i=0;
//	int j=0;
//	int count=0;
//	int flag=0;
//	int lock=1;//1 on  0 off
//	int after_math=0;
//	int real_start=-1;
//	int real_end=-1;
//	int arr[100][100]={0};
//	scanf("%d %d",&row,&col);
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<col;j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	int start=-1;
//	int end=-1;
//	for(i=0;i<row;i++)
//	{
//	
//		count=-1;
//		real_start=-1;
//		real_end=-1;
//		after_math=0;
//		for(j=0;j<col;j++)
//		{
//			if(arr[i][j]==1)
//			{
//				count++;
//				flag=1;	
//			}
//			if(lock==1 && flag==1)//上锁
//			{
//				start=j;//记录开始点
//				lock=0;
//			}
//			if(j==col-1 && arr[i][j]==1 && lock==0)//处理最后一点特殊点
//			{
//				after_math=-1;
//				flag=0;
//			}
//			if(lock==0 && flag==0)//开锁
//			{
//				end=j-1;//记录结束点
//				if(after_math==-1)
//				{
//					end++;
//					after_math=0;
//				}
//				if(end-start>count)
//				{
//					real_start=start;
//					real_end=end;
//				}
//				lock=1;
//				flag=0;
//				count=end-start;
//			}
//		}
//		printf("%d %d\n",real_start,real_end);
//	}
//	return 0;
//}
