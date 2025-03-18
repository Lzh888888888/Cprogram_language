#include<stdio.h>
/*
07-122
用兩個變數的數值交換對三個變數做排序[上and下集] (使用 if 述句)
*/

int main()
{
    int a,b,c,t;
    printf("Please enter the lengths:");
    scanf("%d%d%d",&a,&b,&c);
    
    //三個變數排序
    if(b < a){
        t = b; b = a; a = t;
    }
    if(c < a){
        t = c; c = a; a = t;
    }
    if(c < b){
        t = c; c = b; b = t;
    }
    printf("After:%d %d %d\n",a,b,c);

    //判斷三角形類別
    if(a == c){
        printf("Regular triangle\n");//正三角形
    }
    if(a == b || b == c){
        printf("Isosceles triangle\n");//等腰三角形
    }
    if(a * a + b * b == c * c){
        printf("Rectangular triangle\n");//直角三角形
    }


    
    return 0;
}