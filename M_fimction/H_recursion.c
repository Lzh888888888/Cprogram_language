#include<stdio.h>
/*
14 - 01
函式遞迴
*/

int f(int);

int main(){
    printf("%d\n",f(0));
    return 0;
}

int f(int i){
    if (i == 2){
        return i;
    }
    return f(i+1);
}