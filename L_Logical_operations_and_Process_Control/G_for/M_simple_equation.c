#include<stdio.h>
/*
12 - 06
求簡易整數方程式的練習 (使用 for 述句)
*/
//已知兩個正整數相加為30,相乘為221。求此兩個正整數為?
int main()
{
    int i,j;

//第一種
    printf("第一種(兩層迴圈):\n");
    for(i = 1; i <= 30/2; ++i){
        for(j = 30/2; j <= 30; ++j){
            if(i+j == 30 && i*j == 221){
                printf("%d , %d\n",i,j);
            }
        }
    }

//第二種
    printf("第二種(一層迴圈):\n");
    i = j = 0;
    for(i = 1; i <= 30/2; ++i){
        j = 30 - i;
        if(i*j == 221){
            printf("%d , %d\n",i,j);
        }
    }
    return 0;
}
