#include<stdio.h>
/*
11-02 11-03 11-04 11-05
韓信點兵的練習、
有範圍的韓信點兵問題、
韓信點兵中的最大值問題、
有次數的韓信點兵練習 (使用 for 述句)
*/

int main()
{
//11-02
    int number = 1;
    printf("韓信點兵數字最小的:");
    for (
        number = 1; 
        !(number % 3 == 2 && number % 5 == 3 && number % 7 == 2); 
        ++number);
    printf("%d ",number);

//11-03 讓使用者輸入搜尋上下限,找出上下限內所有韓信點兵問題的答案。
    printf("\n有範圍的:\n");

    int min,max;
    number = 0;
    printf("MIN = ");
    scanf("%d",&min);
    printf("MAX = ");
    scanf("%d",&max);
    printf("  由小到大:");
    for (number = min; number <= max; ++number){
        if (number % 3 == 2 && number % 5 == 3 && number % 7 == 2){
            printf("%d ",number);
        }
    }
    printf("\n  由大到小:");
    for (number = max; number >= min; --number){
        if (number % 3 == 2 && number % 5 == 3 && number % 7 == 2){
            printf("%d ",number);
        }
    }

//11-04 找出上下限內所有韓信點兵問題答案中最大的。
    int answer = 0;
    for (number = max; number >= min && answer == 0; --number){
        if (number % 3 == 2 && number % 5 == 3 && number % 7 == 2){
            answer = number;//如果用由大到小尋找，會變成最小值，因為answer會儲存最後一個找到的數。
        }
    }
    if (answer != 0){
        printf("\n 最大值: %d",answer);
    }

//11-05 找出上下限所有韓信點兵問題答案中前三個小的。
    printf("\n 前三個小的: ");

    int count = 0;
    for (number = min; number <= max && count < 3; ++number){
        if (number % 3 == 2 && number % 5 == 3 && number % 7 == 2){
            ++count;
            if(count <= 3){
                printf("%d ",number);
            }
        }
    }
    //找出第三個小的。
    count = 0;
    for (number = min; number <= max && count < 3; ++number){
        if (number % 3 == 2 && number % 5 == 3 && number % 7 == 2){
            ++count;
            if(count == 3){
                printf("\n 第三個小的: %d ",number);
            }
        }
    }
}