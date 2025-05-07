#include<stdio.h>
/*
13 - 07
用文字匯出三角形的練習 (使用函式)
*/

//讓使用者輸入正整數N,印出N行星號組成的三角形
void print_stars(int i);
void print_triangle(int N);

int main(){
    int N;
    printf("N=");
    scanf("%d",&N);
    print_triangle(N);
    return 0;
}

void print_triangle(int N){
    int i;
    for (i = 1  ; i <= N; ++i){
        print_stars(i);
        printf("\n");
    }
}

void print_stars(int i){
    int j;
    for(j = 1; j <= i; ++j){
        printf("*");
    }
}
//void作為回傳值的型態，表示該函示不回傳任何值。