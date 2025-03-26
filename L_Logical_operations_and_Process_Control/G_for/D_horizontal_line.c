#include<stdio.h>
/*
10-06
用文字繪橫線的練習 (使用 for 述句)
*/

int main()
{
//輸入N繪製該長度的文字橫線
    int N,count;
    printf("N =");
    scanf("%d",&N);
    for (count = 1; count <= N; count++){
        printf("*");
    }
    printf("\n");
    return 0;
}