#include<stdio.h>
/*
13 - 03
使用 C 標準函式庫
*/
/*
example:
數學運算<math.h>
    有 sqrt(求平方根)、ceil(無條件進位)、abs (絕對值)等函式
輸入輸出處理<stdio.h>
    有 printf(從標準輸出輸出)、scanf(從標準輸入輸入)等函式
*/

//計算平方根
#include<math.h>

int main() {
    int N;
    printf("N= ");
    scanf("%d", &N);
    printf("%f\n", sqrt(N));//使用平方根(sqrt)一定要匯入math.h函式庫
    return 0;
}