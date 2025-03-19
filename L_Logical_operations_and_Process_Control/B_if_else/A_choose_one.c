#include<stdio.h>
/*
08-01 08-02
及格或不及格、
兩個變數比大小的練習(使用 if-else 述句)
*/

int main()
{
    //分數及格判斷
    int score;
    printf("Please enter the grade:");
    scanf("%d",&score);
    
    if(score >= 60){
        printf("PASS\n");
    }else{
        printf("FAIL\n");
    }
    //兩個變數比大小
    int a,b;
    printf("Please enter a and b: ");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("a > b\n");
    }else if(a<b){//可以把else if合起來可節省一對大括號
        printf("a < b\n");
    }else{
        printf("a = b");
    }
    return 0;
}