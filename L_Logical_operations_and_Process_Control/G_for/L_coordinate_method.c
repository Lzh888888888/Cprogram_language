#include<stdio.h>
/*
12 - 05
基於座標法用文字繪製三角形 (使用 for 述句)
*/
//讓使用者輸入正整數N,印出N行星號組成的三角形
int main()
{
    int n,i,j;
    printf("N = ");
    scanf("%d",&n);

//空心版
    printf("空心版：\n");
    for(i = 1; i <= n; ++i){
        for (j = 1; j <= n; ++j){
            if(j == 1 || i == n || i == j){
                printf("*");
            }else {
                printf(" ");
            }
        }
        printf("\n");
    }

//變化實心版(直角在右下)
    printf("\n變化實心版(直角在右下)：\n");
    for(i = 1; i <= n; ++i){
        for (j = 1; j <= n; ++j){
            if(i+j >= n+1){
                printf("*");
            }else {
                printf(" ");
            }
        }
        printf("\n");
    }

//變化空心版(直角在右下)
    printf("\n變化空心版(直角在右下)：\n");
    for(i = 1; i <= n; ++i){
        for (j = 1; j <= n; ++j){
            if(j == n || i == n || i+j == n+1){
                printf("*");
            }else {
                printf(" ");
            }
        }
        printf("\n");
    }

//變化空心版(直角在右上)
    printf("\n變化空心版(直角在右上)：\n");
    for(i = 1; i <= n; ++i){
        for (j = 1; j <= n; ++j){
            if(j == n || i == 1 || i == j){
                printf("*");
            }else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
