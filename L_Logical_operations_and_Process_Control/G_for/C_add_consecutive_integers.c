#include<stdio.h>
/*
10-05
求連續整數和的練習 (使用 for 述句)
*/

int main()
{
    int sum = 1;
    int i;
    printf("1加到100\n");
    for (i = 2; i <= 100; i++){
        sum += i;
    }
    printf("%d\n",sum);

    printf("求1到n的整數和(用for迴圈)\n");
    sum = 1;
    int n;
    printf("N = ");
    scanf("%d",&n);
    for (i = 2;i <= n; i++){
        sum = sum + i;
    }
    printf("%d\n",sum);
    return 0;
}