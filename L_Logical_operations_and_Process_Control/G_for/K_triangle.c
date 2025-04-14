#include<stdio.h>
/*
12 - 04
用文字繪製三角形的練習 (使用 for 述句)
*/
//讓使用者輸入正整數N,印出N行星號組成的三角形
int main()
{
    int n,i,j;
    printf("N = ");
    scanf("%d",&n);

//繪製實心三角形
    printf("實心版：\n");
    for(i = 1; i <= n; ++i){
        for (j = 1; j <= i; ++j){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
//繪製空心三角形
    printf("空心版：\n");
    printf("*\n");                  // 印1個星星+ 換行
    for(i = 0;i <= n-3; ++i){
        printf("*");                // 印1個星星
        for(j = 1; j <= i; ++j){   // 印個空白
            printf(" ");
        }
        printf("*\n");              // 印1個星星 + 換行
    }
    for (j = 1; j <= n; ++j){       // 印N個星星
        printf("*");
    }
    printf("*\n");                  // 換行
    return 0;
}
