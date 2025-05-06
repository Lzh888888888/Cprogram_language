#include<stdio.h>
/*
13 - 05
關於變數名稱可視範圍 (scope)
*/

/*
int i;//全域變數

int main(){
    int i;//區域變數
    {
        int i;//同一組區塊{}裡同名稱變數只能有一個
    }
    return 0;
}

int f(int i){//函式參數
    return 0;
}
*/

//example
int a = 1;

int main(){
    printf("%d\n", a);//1
    int a = 2;
    printf("%d\n", a); //2
    {
        printf("%d\n", a);//2
        int a = 3;
        printf("%d\n", a); //3
    }
    printf("%d\n", a);//2
    return 0;
}