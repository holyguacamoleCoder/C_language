#define _CRT_SECURE_NO_WARNINGS 1
//青蛙跳台问题
int Frog_jump(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		return Frog_jump(n - 1)+Frog_jump(n-2);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Frog_jump(n);
	printf("%d", ret);
	return 0;
}
