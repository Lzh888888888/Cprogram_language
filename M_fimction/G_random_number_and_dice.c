#include<stdio.h>
/*
13 - 08 13 - 09
亂數生成 (使用函式)
擲骰子的練習 (使用函式)
*/
#include<stdlib.h>
#include<time.h>
//ex1：隨機產生五個亂數
/*
int main(){
    srand(tine(0));
    int i;
    for(i = 1; i <= 5; i++){
        printf("%d\n",rand());
    }
    return 0;
}
*/

//ex2：模擬擲五次公正骰子的結果。
int main(){
    srand(time(0));
    int i;
    for(i = 1; i <= 5; i++){
        int dice = rand() % 6 + 1;
        printf("%d\n",dice);
    }
    return 0;
}