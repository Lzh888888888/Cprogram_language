#include<stdio.h>
/*
08-07
ID 查詢的練習(使用 switch 述句)
*/
int main()
{
    int id;
    printf("ID: :");
    scanf("%d",&id);
    switch (id){
    case 2:
        printf("John\n");
        break;
    case 13:
        printf("Mary\n");
        break;
    case 16:
        printf("Amy\n");
        break;
    default:
    printf("Not found\n");
    }

    return 0;
}