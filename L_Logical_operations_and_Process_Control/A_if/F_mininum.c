#include<stdio.h>
/*
07-04
對多個變數求最小值的練習(使用if)
*/
int main()
{
    int a,b,c,min;
    printf("Please enter three integers: ");
    scanf("%d%d%d",&a,&b,&c);
    min = a;
    if(b<min){
        min = b;
    }
    if(c<min){
        min = c;
    }
    
    printf("The mininum is %d.\n",min);
    return 0;
}