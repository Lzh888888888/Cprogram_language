#include<stdio.h>
/*
06-04
滿額折扣計算練習(使用if)
*/

/**
Question:
某吃到飽餐廳的套餐1人300元(無額外的費用)。今日因周年慶特價方案,
每桌消費滿3000元就打八折。試寫一程式讓服務生輸入一桌的消費人數後,
輸出該桌顧客應付的總額。
**/
int main()
{
    int number , total;
    printf("Please enter the number of custtomers: ");
    scanf("%d", &number);
    total = number * 300;
    if (total < 3000){
        total = total;
    }
    if (total >= 3000){
        total = total * 0.8;
    }
    printf("Total: %d\n",total);


    return 0;
}