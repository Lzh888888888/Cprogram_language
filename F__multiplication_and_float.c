#include <stdio.h>

//整數乘除法與浮點數float

int main()
{
    int milk = 30;
    float discount = 0.5;
    printf("Discount:%f\n",discount);//印出float變數要用%f
    
    int total = milk * discount;
    printf("Total:%d\n",total);

    int maxinteger = __INT_MAX__;
    printf("maxinteger:%d\n",maxinteger);//輸出值=2147483647
    discount = maxinteger;
    printf("maxinteger:%f",discount);//輸出值=2147483648.000000
    //float的儲存方式和intrger不同，因此輸出值會有誤差

    return 0;
}
