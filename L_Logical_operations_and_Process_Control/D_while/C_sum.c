#include<stdio.h>
/*
09-04
求不定個數正整數和的練習 (使用while述句)
*/
int main()
{
    int number;
    int sum;
    printf("Please enter the numbers (quit:0): ");
    scanf("%d",&number);
    while (number != 0) {
        sum += number;
        printf("Please enter the numbers (quit:0): ");
        scanf("%d",&number);
    }
    printf("The sum is %d.\n",sum);
    return 0;
}