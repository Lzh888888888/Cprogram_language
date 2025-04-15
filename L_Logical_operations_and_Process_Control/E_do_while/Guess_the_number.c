#include<stdio.h>
/*
09-07
至少做一次的重複執行 (do-while 述句)(簡略介紹，13章會詳細說明及應用)
*/
//猜數字練習
int main()
{
    int answer = 4;
    int guess;
    
    do {
        printf("Please enter your gurss: ");
        scanf("%d",&guess);
        if (guess > answer){
            printf("Too small!\n");
        } else if (guess < answer){
            printf("Too small!\n");
        } else{
            printf("Correct!\n");
        }
        
    } while (guess != answer);
    

    return 0;
}
/*
09-08
複合賦值與遞增遞減運算
a += 1 ==> a++ ==> ++a
a -= 1 ==> a-- ==> --a
a++ 運算結果為 a原本的值
++a 運算結果為 a+1後的值
a-- 運算結果為 a原本的值
--a 運算結果為 a-1後的值
ex:
int a = 0;
int b;
b = ++a; //a先加再賦予b,a的值,因此a = 1,b = 1
b = a++; //a先賦予b值,自己再加,因此a = 2,b = 2
a = a++; //未定義行為
*/