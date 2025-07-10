#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
15 - 06
兩顆骰子點數和出現次數統計的練習 (使用陣列)
*/
/*
練習：兩顆骰子點數和出現次數統計
模擬擲100000次公正骰子,每次擲兩顆,統計各種點數和出現的次數。
*/
int main(){
    srand(time(0));
    int counter[11] = {0};
    int i;
    for (i = 1; i <= 100000; i++){
        int dice1 = rand() % 6 + 1;
        int dice2 = rand() % 6 + 1;
        int sum = dice1 + dice2;
        counter[sum-2]++;
    }
    for (i = 2; i <= 12 ; i++){
        printf("%d: %d\n", i, counter[i-2]);
    }
    return 0;
}