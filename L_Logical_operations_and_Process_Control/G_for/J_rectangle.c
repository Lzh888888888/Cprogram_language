#include<stdio.h>
/*
12 - 02 03
用文字繪製長方形的練習
用文字繪製空心長方形的練習 (使用 for 述句)
*/
//讓使用者輸入正整數N,印出N x N個 * 組成的圖形
int main()
{
    int n,i,j;
    printf("N = ");
    scanf("%d",&n);

//繪製實心長方形
    printf("實心版：\n");
    for(i = 1; i <= n; ++i){
        for (j = 1; j <= n; ++j){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

//繪製空心長方形
    printf("空心版：\n");

    for(i = 1; i <= n; ++i){
        for (j = 1; j <= n; ++j){
            if(i == 1 || i == n || j == 1 || j == n){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
