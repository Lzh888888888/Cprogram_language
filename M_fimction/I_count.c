#include<stdio.h>
/*
14 - 02
數數字的練習 (使用函式)
*/
//印出1到3和3到1的連續整數
void countTo3(int);
void countTo1(int);

int main(){
    countTo3(1);
    countTo1(1);
    return 0;
}

void countTo3(int i){
    if (i <= 3){
        printf("%d\n",i);
        countTo3(i+1);
    }
}

void countTo1(int i){
    if (i <= 3){
        countTo1(i+1);
        printf("%d\n",i);
    }
}