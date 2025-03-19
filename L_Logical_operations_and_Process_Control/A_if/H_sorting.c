#include<stdio.h>
/*
07-06 07-07 07-08 07-09
對兩個變數排序、
三個變數的數值交換、
對三個變數排序(使用if)
*/

int main()
{
    int a,b,t;
    //兩個變數由小到大排序
    printf("Please enter the two integers: ");
    scanf("%d%d",&a,&b);
    printf("Before two integers: %d %d\n",a,b);
    if(a>b){
        t = a;
        a = b;
        b = t;
    }
    printf("After two integers: %d %d\n",a,b);

    //三個變數數值交換
    a = 2 , b = 7; 
    int c=9;
    printf("Before three integers: %d %d %d\n",a,b,c);
/*第一種：
    t = a;
    a = c;
    c = b;
    b = t;
*/
//第二種：
//a和c交換
    t = a;
    a = c;
    c = t;
//b和c交換
    t = b;
    b = c;
    c = t;
    printf("After three integers: %d %d %d\n",a,b,c);

    //三個變數由小到大排序
    printf("Please enter the three integers: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Before: %d %d %d\n",a,b,c);
    if(a<c && c<b){
        t = b; b = c; c = t;
    }
    if(b<a && a<c){
        t = a; a = b; b = t;
    }
    if(b<c && c<a){
        t = a; a = b; b =c; c = t;
    }
    if(c<a && a<b){
        t = a; a = c; c = b; b = t;
    }
    if(c<b && b<a){
        t = a; a = c; c = t;
    }
    printf("After: %d %d %d\n",a,b,c);
    return 0;
}