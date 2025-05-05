#include<stdio.h>
/*
13 - 04
對兩個變數求最大值的練習(使用函式)
*/

//輸入兩個整數值,輸出兩個中的最大值?

int max2(int, int);

int main() {
    int a, b;
    printf ("Please enter the first integer: ");
    scanf("%d", &a);
    printf ("Please enter the second integer: ");
    scanf("%d", &b);
    printf ("The maxinum is %d.\n", max2(a, b));
    return 0;
}

int max2(int a, int b) {
    int max;
    if (a >= b) {
        max = a;
    } else {
        max = b;
    }
    return max;
}