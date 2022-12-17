#include<stdio.h>
 
int main()
{
 
    int n, m, i, sum1 = 0, sum2 = 0, count1 = 0, count2 = 0;
    scanf("%d %d", &n, &m);
    for (i = 1; i < n / 2 + 1; i++){        //a的真约数之和
        if (n % i == 0) {
            sum1 += i;
            count1++;
        }
    }
    for (i = 1; i < m / 2 + 1; i++){        //b的真约数之和
        if (m % i == 0) {
            sum2 += i;
            count2++;
        }
    }
    if (sum1 == m && sum2 == n)            //判断二者真约数之和是否互相相等
        printf("yes %d %d", count1, count2);
    else
        printf("no %d %d", count1, count2);
 
    return 0;
}
