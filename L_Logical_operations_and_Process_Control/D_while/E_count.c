#include<stdio.h>
/*
09-06
數數字的練習 (使用while述句)
*/
int main()
{
    int m,n; 
    printf("Please enter the m: ");
    scanf("%d",&m);
    printf("Please enter the n: ");
    scanf("%d",&n);
    while (m <= n) {
        printf("%d\n",m);
        m ++;//m+=1
    }

    return 0;
}