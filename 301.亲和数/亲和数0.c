#include<stdio.h>
 
int main()
{
 
    int n, m, i, sum1 = 0, sum2 = 0, count1 = 0, count2 = 0;
    scanf("%d %d", &n, &m);
    for (i = 1; i < n / 2 + 1; i++){        //a����Լ��֮��
        if (n % i == 0) {
            sum1 += i;
            count1++;
        }
    }
    for (i = 1; i < m / 2 + 1; i++){        //b����Լ��֮��
        if (m % i == 0) {
            sum2 += i;
            count2++;
        }
    }
    if (sum1 == m && sum2 == n)            //�ж϶�����Լ��֮���Ƿ������
        printf("yes %d %d", count1, count2);
    else
        printf("no %d %d", count1, count2);
 
    return 0;
}
