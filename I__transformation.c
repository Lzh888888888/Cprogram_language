#include <stdio.h>

//基本型態的強制轉型

int main()
{

    printf("%d\n",(int)20.1); 
    printf("%f\n",(float)20.1); 

    int money = 10;
    int people =4;
    printf("%f\n",((float)money / people));


    char word = 'a';
    printf("%d\n",(int)word);//97
    printf("%c\n",(char)97);//a
    printf("%c\n",(char)98);//b
    printf("%c\n",(char)99);//c
    printf("%c\n",(char)100);//d
//利用ASCII讓代碼和字母依規則交換

    return 0;
}
