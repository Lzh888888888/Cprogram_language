#include<stdio.h>
/*
07-01 07-02 07-03
對兩個、三個、四個變數求最大值的練習(使用if)
*/
int main()
{
    //兩個變數求最大值
    int a,b,max;
    printf("Please enter the first integer: ");
    scanf("%d",&a);
    printf("Please enter the second integer: ");
    scanf("%d",&b);
/*
    if (a >= b){
        max = a;
    }
*/
    max = a;//先將最大值設為a，後續再和b比較。
    if (a < b){
        max = b;
    }
    printf("The maxinum is %d.\n",max);

    //三個變數求最大值
    int x , y , z;//max變數設在上面
    printf("Please enter three intr=egers: ");
    scanf("%d%d%d",&x,&y,&z);
/*  
    if (x>y && x>=z){
        max = x;
    }
    if (y>x && y>=z){
        max = y;
    }
    if (z>x && z>y){
        max = z;
    }
*/
    max = x;
    if (y>max){
        max = y;
    }
    if(z>max){
        max = z;
    }//先任x為最大值，後續再比較。
    
    printf("The maxinum is %d.\n", max);

    //四個變數求最大值
    int i , ii , iii , iv;//max變數設在上面
    printf("Please enter four integers: ");
    scanf("%d%d%d%d",&i,&ii,&iii,&iv);
/*
    if(i >= ii && i >= iii && i>= iv){
        max = i;
    }
    if(ii > i && ii >= iii && ii>= iv){
        max = ii;
    }
    if(iii > i && iii > ii && iii>= iv){
        max = iii;
    }
    if(iv > i && iv > ii && ii> iii){
        max = iv;
    }有些無等號是因為沒必要而刪除
*/
    max = i;
    if (ii>max){
        max = ii;
    }
    if (iii>max){
        max = iii;
    }
    if (iv>max){
        max = iv;
    }
    printf("The maxinum is %d.\n" , max);

    return 0;
}