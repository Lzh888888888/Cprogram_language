#include<stdio.h>
/*
11-01
找出所有正因數的練習 (使用 for 述句)
*/

int main()
{
//讓使用者輸入正整數N,找出N的所有正因數。
    int n,number;
    printf("N =");
    scanf("%d",&n);
    for (number = 1; number <= n; number++){//列出可能的候選者
        if(n %number == 0){//檢查符合條件
            printf("%d ",number);
        }
    }
    return 0;
}