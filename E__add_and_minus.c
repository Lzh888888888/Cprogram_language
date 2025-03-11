#include <stdio.h>

//整數加減法與一元運算子和執行順序

int main()
{
    int total = 0;
    int budget = 1000;
    int product1price = 100;
    int product2price = 200;
    

    printf("原本預算：%d\n",budget);

    //total += product1price=>total = total + product1price;//100=0+100
    //total += product2price=>total = total + product2price;//300=100+200
    total += product1price + product2price;//300=0+100+200
    printf("商品總價：%d\n",total);

    //budget-= product1price=>budget = budget - product1price;//900=1000-100
    //budget -= product2price=>budget = budget - product2price;//700=900-100
    budget -= product1price + product2price;//=>budget = budget -(p1+p2)=>700=1000-(100+200)
    printf("預算餘額：%d\n",budget);




    return 0;
}
