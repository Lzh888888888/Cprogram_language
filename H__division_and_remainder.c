#include <stdio.h>

//除法與餘數

int main()
{
    int value1 = 10;
    double value2 = 6;
    float result = 0;

    result = value1 / value2;

    printf("%.12f\n",result);//int除int依然是整數
    
    double value3 = 10;
    double ans = 0;
    ans = value3 / value2;

    printf("%.12f\n",ans);

    int people = 12;
    int capacity = 5;
    int cars = 0;
    int leftPeople = 0;

    cars = people / capacity;
    leftPeople = people % capacity;

    printf("需要%d台車\n",cars);
    printf("有%d人沒搭到車\n",leftPeople);

    return 0;
}
