#include<stdio.h>
/*
10-03
數等差數列的練習 (使用 for 述句)
*/
//for (初始式;條件式;迴圈式){程式片段}

int main()
{
    int count;
    //印出十到一
//第一種
/*  for (count = 10; count >= 1; count--){
        printf("%d\n",count);
    }
*/
//第二種
    for (count = 1; count <= 10; count++){
        int number = 11 - count;
        printf("%d\n",number);
    }
    printf("==========\n");
    //印出1到10間的奇數
//第一種
/*  for (count = 1;count <= 9; count+= 2){
        printf("%d\n",count);
    }
*/
//第二種
/*  for (count = 1;count <= 5; count++){
    int number = 2 * count - 1;
        printf("%d\n",number);
    }
*/
//第三種
    for (count = 1;count <= 10; count++){
        if (count % 2 == 1){//印出count除以2會於1的數
            printf("%d\n",count);
        }
    }


    return 0;
}