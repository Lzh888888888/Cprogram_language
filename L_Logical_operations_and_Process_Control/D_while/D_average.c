#include<stdio.h>
/*
09-05
求不定個數正整數平均的練習 (使用 while 述句)
*/
int main()
{
    int number;
    int sum = 0;
    int count = 0;
    float average;
    printf("Please enter the numbers (0: quit): ");
    scanf("%d",&number);
    while (number != 0) {
        sum += number;
        count += 1;
        printf("Please enter the numbers (0: quit): ");
        scanf("%d",&number);
    }
    if (sum == 0){
        printf("The average is N/A.");//如過一開始輸入0，會執行此程式  
    } else{
        average = (float) sum / count;
        printf("The average is %f.\n",average);
    }
    return 0;
}