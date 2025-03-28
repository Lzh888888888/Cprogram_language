#include<stdio.h>
/*
11-06
質數判斷練習 (使用 for 述句)
*/

int main()
{
//11-02
    int n,number;
    printf("N = ");
    scanf("%d",&n);
//將isPrime變數利用布林來確認是不是質數
/*  int isPrime = 1;
    for (number = 2; number < n && isPrime; ++number){
            if (n % number == 0){
                isPrime = 0;
            }
        }
    if (isPrime == 0){
        printf("Yes\n");
    }else {
        printf("No\n");
    }
*/
//利用number的累加，使得在過程中都沒有整除N的數，就可以確認N為質數。
    for (number = 2; number < n && n % number != 0; ++number);
    if (number == n){
        printf("Yes\n");
    }else {
        printf("No\n");
    }
    return 0;
}