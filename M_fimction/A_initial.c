#include<stdio.h>
/*
13 - 01 13 - 02 
函式簡介、
更多關於函式使用的細節
*/
/*
    回傳值的資料型態 函數名稱(參數的資料型態 參數名稱,...)
        程式碼片段
        return 回傳值;
*/

int f(int);//函式宣告(參數名稱(x)可省略)
double div2(double);

int main(){
    printf("%d\n",f(4));//f(4)為函式呼叫

//ex:除以2的函式
    int N;
    printf("N = ");
    scanf("%d",&N);
    printf("%f\n",div2(N));
    return 0;
}

//函式定義(放前面就不需要宣告，但宣告較方便)
int f(int x){
    return x + 3;
}

double div2(double x){
    return x / 2;
}