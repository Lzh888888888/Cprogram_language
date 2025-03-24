#include<stdio.h>
/*
09-09
消費金額計算的練習 (使用 switch 述句)
*/
/*
商品編號及價格:
1 90
2 75
3 83
4 89
5 71
*/
int main()
{
    int total;
    int id;
    do{
        printf("Please enter the serial number(0:quit): ");
        scanf("%d",&id);
        switch (id){//也可利用if，但switch更加明確
        case 1: total += 90; break;
        case 2: total += 75; break;
        case 3: total += 83; break;
        case 4: total += 89; break;
        case 5: total += 71; break;
        }
    } while (id != 0);
    printf("Total: %d\n",total);

    return 0;
}