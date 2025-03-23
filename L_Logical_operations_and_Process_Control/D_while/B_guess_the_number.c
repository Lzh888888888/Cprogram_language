#include<stdio.h>
/*
09-02、09-03
猜數字練習、
數數猜了幾次的練習(使用while述句)
*/
int main()
{
    int answer = 4;
    int guess;
    int count = 0;
/*    
    printf("Please enter your guess: ");
    scanf("%d",&guess);
    count += 1;
    while (guess != answer){
        if (guess > answer){
            printf("Too large!\n");
        } else {
            printf("Too small!\n");
        }
        printf("Please enter your guess: ");
        scanf("%d",&guess);
        count += 1;
    }
*/
//簡易版：
    while (count == 0 || guess != answer){
        printf("Please enter your guess: ");
        scanf("%d",&guess);
        count += 1;
        if (guess > answer){
            printf("Too large!\n");
        } else {
            printf("Too small!\n");
        }
    }
    printf("Correct! (%d)\n",count);

    return 0;
}