#include<stdio.h>
/*
13 - 06
對三個變數求最大值的練習 (使用函式)
*/
//利用max2結合max3來求三個變數的最大值
int max2(int, int);
int max3(int, int, int);

int main() {
    int a, b, c;
    printf("Please enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The maximum is %d.\n", max3(a, b, c));
    return 0;
}

int max3(int a, int b, int c){
    return max2(max2(a, b), c);
}

int max2(int a, int b) {
    if (a >= b) {
        return a;
    } else {
        return b;
    }
}