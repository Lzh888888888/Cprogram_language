#include <stdio.h>

//宣告char字元 and string字串(%c and %s)

int main()
{
    char newChar='h';//宣告字元使用單引號，且裡面只能擺一個字元(英文字、數字or標點符號)
    char newstring[] = "world";//宣告字串要在變數名後加上[]，且字串使用雙引號
    char name[] = "bob";
    printf("%c%cllo world\n",newChar,'e');//依順序代換%c
    printf("%s %s\n","hello",newstring);//依序代換"hello"和newstring內的字串
    printf("Hi!,%s",name);//代入name中的字串

    printf("\n%s woard\n","hello");//%s代換成hello

    //利用char製作大寫轉小寫(另一門課程補充)
    char input , output;
    printf("請輸入一個英文大寫字元：");
    scanf("%c",&input);
    output = input + ('a' - 'A');//大寫跟小寫字元差，('a'-'A')=32,也可以直接+32
    printf("此小寫字元是：%c\n",output);


    return 0;
}

