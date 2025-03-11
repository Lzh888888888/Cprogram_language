#include<stdio.h>
//scanf 輸入函式and算三個數字的和
int main()
{
    //寫法1
    int integer1 , integer2 , integer3 , sum;
    printf("Please enter the first integer:");
    scanf("%d",&integer1);
    printf("Please enter the second integer:");
    scanf("%d",&integer2);
    printf("Please enter the third integer:");
    scanf("%d",&integer3);
    sum = integer1 + integer2 + integer3;
    printf("Sum is %d\n",sum);
    //寫法2
    int integer , sum2;
    printf("Please enter the first integer:"); 
    scanf("%d",&integer);
    sum2 = integer;
    printf("Please enter the second integer:");
    scanf("%d",&integer);
    sum2 = sum2 + integer;
    printf("Please enter the third integer:");
    scanf("%d",&integer);
    sum2 = sum2 + integer;
    printf("Sum is %d.\n",sum2);
    return 0;
}
/*
如果變數多，寫法1會設置較多變數，需要使用很多記憶體。
             寫法2會用較多指令，需要利用CPU執行更多程式，使效率降低，速度變慢。
*/