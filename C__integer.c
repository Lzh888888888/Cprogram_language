#include <stdio.h>

//變數不同宣告法，整數integer(%d)

int main()
{
/*  
    int pr = 5;
    int total = 10;
*/
    int pr = 5,total = 10;//也可這樣宣告多個變數
    printf("%d\n",pr);

    pr = total; //將pr的值改為total的值
    printf("%d\n",pr);


    return 0;
}

