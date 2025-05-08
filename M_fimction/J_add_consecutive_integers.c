#include<stdio.h>
/*
14 - 03
求連續整數和的練習 (使用函式)
*/
//印出1到N的連續整數和
int sum(int N);

int main(){
    int N;
    printf("N = ");
    scanf("%d",&N);
    printf("%d\n",sum(N));
    return 0;
}

int sum(int N){
    if (N == 1){
        return 1;
    }
    return sum(N-1) + N;
}