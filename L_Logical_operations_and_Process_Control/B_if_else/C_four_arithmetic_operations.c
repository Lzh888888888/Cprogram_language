#include<stdio.h>
/*
08-04
簡易四則運算練習(使用 if-else 述句)
*/

int main()
{
    int a,b;
    char op;
    float answer;
    printf("Please enter your formula: ");
    scanf("%d%c%d",&a,&op,&b);
    
    if(op == '+'){
        answer = a + b;
    }else if(op == '-'){
        answer = a - b;
    }else if(op == '*'){
        answer = a * b;
    }else {
        answer = (float) a / b; 
    }
    printf("ANS: %f\n",answer);
    return 0;
}