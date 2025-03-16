#include<stdio.h>
/*
07-05
對三個變數求中位數的練習(使用if)
*/
int main()
{
    int a,b,c,med;
    printf("Please enter the three integers: ");
    scanf("%d%d%d",&a,&b,&c);
/*
    if(b<=a && a<=c || c<=a && a<=b){
        med = a;
    }
*/
    med = a;
    if(a<=b && b<=c || c<=b && b<=a){
        med = b;
    }
    if(a<=c && c<=b || b<=c && c<=a){
        med = c;
    }

    printf("The median is %d.\n",med);
    return 0;
}