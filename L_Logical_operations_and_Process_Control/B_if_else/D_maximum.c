#include<stdio.h>
/*
08-05
對多個變數求最大值的練習(使用 if-else 述句)
*/

int main()
{
    //對兩個
    int a,b,max;
    printf("Please enter two integers: ");
    scanf("%d%d",&a,&b);
    if(a >= b){
        max = a;
    }else{
        max = b;
    }
    printf("The maximum is %d\n",max);

    //對三個
    int c;//a,b上面已設定
    printf("Please enter three integers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a > b && a > c){
        max = a;
    }else if(b > a && b > c){
        max = b;
    }else {
        max = c;
    }    
    printf("The maximum is %d\n",max);


    return 0;
}