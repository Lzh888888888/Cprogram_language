#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
15 - 01 15 - 02 15 - 03 15-04
陣列簡介、
骰子點數出現次數統計的練習、
骰子點數出現次數的統計 (使用陣列)、
循序存取陣列元素 (使用迴圈)
*/
/*
陣列變數定義：
元素資料型態 陣列變數名稱[元素個數] ex：int var[3]
*/
/*陣列的第一種用途
int v[3];
v[0] = 3;
v[1] = 5;
v[2] = 0;
int max = v[0];
if (v[1] > max){
    max = v[1];
}
if (v[2] > max){
    max = v[2];
}
priintf("Max: %d\n",max);
*/

//模擬擲六千次骰子,分別顯示點數1到6出現的次數。
int main(){
    srand(time(0));
    int counter[6] = {0};//將值初始化(打一個0認定六個元素都為0)
    int i,j;
    for (i = 1; i <= 6000; ++i){
        int dice = rand() % 6 + 1;
        for (j = 1; j <= 6; ++j){
            if (dice == j){
                counter[j - 1]++;
            }
        }
    }
    for (j = 1; j <= 6; ++j){
        printf("%d: %d\n", j, counter[j-1]);
    }
    return 0;
}