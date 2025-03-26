#include<stdio.h>
/*
10-07
中止重複執行 (break 與 continue 述句)
*/
/*
break:中斷目前所屬的重複執行述句。
continue:在重複執行述句中跳過後面的程式區塊。
*/
int main()
{
//讓使用者輸入搜尋上限，找出上限內所有韓信點兵問題答案中最大的。
    int max,number;
    printf("Max =");
    scanf("%d",&max);
    for (number = max; number >= 1; --number){
        if(number % 3 == 2 && number % 5 == 3 && number % 7 == 2){
            break;
        }
    }
    printf("%d\n",number);
    return 0;
}