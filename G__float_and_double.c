#include <stdio.h>

//浮點數float(%f)與雙精度浮點數double

int main()
{
    float number1 = 0.3455550;
    float number2 = 0.6544448;

    float sum = number1 + number2;
    printf("%.7f\n",sum);//[%.7f]可印出小數點後7位的值(到第8位後不可用)

    int product = 137;
    float discount = 0.87;
    printf("%.2f\n",product * discount);//只取到小數點後第2位

    double dou = 0.12345678901234567890;

    printf("%d\n",sizeof(dou));
    printf("%f\n",dou);
    printf("%.20f\n",dou);
    return 0;
}
/*
20、21行使用%f而不是%d的解釋：
    double 是小數，%f 是專門用來印小數的。
    %d 是用來印整數的。如果用 %d 印小數，
    會印出亂碼，所以要用 %f 才可以。
*/
/*
float的有效數字到第7位
double的有效數字到第16位
*/