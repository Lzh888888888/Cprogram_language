#include<stdio.h>
/*
12-01
印出九九乘法表的練習 (使用 for 述句)
*/

int main()
{
    int i,j;
    for(i = 2; i <= 9; ++i){
        for (j = 1; j <= 9; ++j){
            printf("%d x %d = %d\n",i,j,2*j);
        }
    }

    return 0;
}
