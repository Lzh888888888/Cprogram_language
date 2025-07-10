#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
15 - 05
隨機存取陣列元素
*/
/*
練習：消費金額計算
    試寫一程式讓使用者分別輸入每個商品的編號。
輸入為0時依照售價表進行結算後,顯示賣出的總金額。
    編號 | 售價
    1    | 90
    2    | 75
    3    | 83
    4    | 89
    5    | 71
*/
int main() {
    int prices[5] = {90, 75, 83, 89, 71};
    int total = 0, id;

    printf("請輸入商品編號 (輸入0結束):\n");
    
    while (1){
        scanf("%d", &id);
        if (id == 0){
            break;
        }
        total += prices[id - 1];
    }
    printf("Total: %d\n", total);
    return 0;
}