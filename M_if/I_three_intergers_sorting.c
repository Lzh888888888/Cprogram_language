#include<stdio.h>
/*
07-10 07-11
用兩個變數的數值交換對三個變數做排序[上and下集] (使用 if 述句)
*/

int main()
{
    int a,b,c,t;
    printf("Please enter the three integers: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Before:%d %d %d\n",a,b,c);
/*  第一種
    b<a<=c、b<=c<a              -->b和a做數值交換
    c<a<=b、c<b<a               -->c和a做數值交換
    a<=c<b、b<=c<a、c<a<=b     -->c和b做數值交換

    if(b < a && a <= c || b <=c && c < a){
        t = b; b = a; a = t;
    }
    if(c < a && a <= b || c < b && b < a){
        t = c; c = a; a = t;
    }
    if(a <= c && c < b || b <=c && c < a || c < a && a<= b){
        t = c; c = b; b = t;
    }
*/
/*第二種:先和a比較，讓a數值換成最小，最後b、c在比較
    1.b<a -->b和a做數值交換
    2.c<a -->c和a做數值交換
    3.c<b -->c和b做數值交換
*/ 
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
    return 0;
}