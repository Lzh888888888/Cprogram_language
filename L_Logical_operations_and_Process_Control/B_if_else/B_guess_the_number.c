#include<stdio.h>
/*
08-03
猜數字練習(使用 if-else 述句)
*/

int main()
{
    int answer = 4;
    int guess;
    printf("Please enter the guess: ");
    scanf("%d",&guess);
    
    if(guess > answer){
        printf("Too large!\n");
    }else if(guess < answer){
        printf("Too small!\n");
    }else{
        printf("Correct!\n");
    }

    return 0;
}
/*
執行一次只能猜一次，如果只要執行一次就可以猜很多次，
需要利用while迴圈。
*/