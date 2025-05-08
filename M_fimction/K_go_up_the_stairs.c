#include<stdio.h>
/*
14 - 04
求上樓梯方法數的練習 (使用函式)
*/
/*
假設每次只走一階或兩階樓梯,
印出走到第N階可能走法的個數 (N >= 1)
*/
int S(int);

int main(){
    int N;
    printf("N = ");
    scanf("%d",&N);
    printf("%d\n",S(N));
    return 0;
}

int S(int N){
    if (N <= 2){
        return N;
    }
    return S(N-1) + S(N-2);
}
/*
S(1) = 1
S (2) = 2
S(4) = S(3) + S(2)
S(5) = S(4) + S(3)
...
*/