#include<stdio.h>
//06-03簡易猜數字(使用if)

int main()
{
    int answer = 4;
    int guess;
    printf("Please enter your guess: ");
    scanf("%d",&guess);
    if (guess > answer){
        printf("To large!\n");
    }
    if (guess < answer){
        printf("Too small!\n");
    }
    if (guess == answer){
        printf("Correct!\n");
    }

    return 0;
}
