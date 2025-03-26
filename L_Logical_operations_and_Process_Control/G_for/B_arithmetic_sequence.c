#include<stdio.h>
/*
10-03 10-04
數等差數列的練習、
數特定條件數列的練習 (使用 for 述句)
*/
//for (初始式;條件式;迴圈式){程式片段}

int main()
{
    int count,number;
    printf("印出一到十\n");
//第一種
/*  for (count = 10; count >= 1; count--){
        printf("%d\n",count);
    }
*/
//第二種
    for (count = 1; count <= 10; count++){
        number = 11 - count;
        printf("%d\n",number);
    }
    printf("==========\n");
    printf("印出1到10間的奇數\n");
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
    printf("==========\n");
    printf("印出1到10間的偶數\n");
//第一種
/*  for (count = ; count <= 10; count+= 2){
        printf("%d\n",count);
    }
*/
//第二種
/*  for (count = 1; count <= 5; count++){
        number = 2 * count;
        printf("%d\n",number);
    }
*/
//第三種
    for (count = 1; count <= 10; count++){
        if (count % 2 == 0){
            printf("%d\n",count);
        }
    }
    printf("==========\n");
    printf("印出1到10間的不是三倍數的偶數\n");
//第一種
/*  for (count = 1; count<=10; count++){
        if(count% 2 == 0 && count % 3 != 0)
        printf("%d\n",count);
    }
*/
//第二種
    for(count = 2; count <= 5; count += 2){
        if(count % 3 != 0){
            printf("%d\n",count);
        }
    }



    return 0;
}