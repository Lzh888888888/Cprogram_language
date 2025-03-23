#include<stdio.h>
/*
08-06
多選一的交叉路口-簡易四則運算練習 (switch 述句)
*/
int main()
{
    int a,b;
    char op;
    float answer;
    printf("Please enter the sormula:");
    scanf("%d%c%d",&a,&op,&b);
    switch (op){
    case '+':
        answer = a + b;
        break;//代表結束switch
    case '-':
        answer = a - b;
        break;
    case '*':
        answer = a * b;
        break;
    case '/':
        answer = (float) a / b;
        break;
    }
printf("ANS: %f\n",answer);

    return 0;
}