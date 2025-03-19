#include<stdio.h>
/*
06-05 06-06 06-07 06-08 06-09
正三角形、等腰三角形、直角三角形判斷練習+綜合+簡化(使用if)
*/

int main()
{
    int side1,side2,side3;

    printf("Please enter the lengths:");
    scanf("%d%d%d",&side1,&side2,&side3);

    if(side1 == side2 && side2 == side3){
        printf("Regular triangle\n");//正三角形
    }
    if(side1 == side2 || side2 == side3 || side1 == side3){
        printf("Isosceles treangle\n");//等腰三角形
    }
    if(side1 * side1 +side2 * side2== side3 * side3 ||
        side2 * side2 + side3 * side3 == side1 * side1 || 
        side1 * side1 + side3 * side3 == side2 * side2 ){//平方不能使用^2
        printf("Rectangular triangle\n");//直角三角形
    }

    //簡化版(手動輸入邊長時，需要讓side1 <= side2 <= side3)
    if(side1 <= side2 <= side3){
        if(side1 == side3){
            printf("Regular triangle\n");//正三角形
        }
        if(side1 == side2 || side2 == side3){
            printf("Isosceles treangle\n");//等腰三角形
        }
        if(side1 * side1 +side2 * side2== side3 * side3){
            printf("Rectangular triangle\n");//直角三角形
        }
    }

    return 0;
}