#include <stdio.h>

//2進位與16進位

int main()
{
    // 2進位表示法bits 0 1
    //0b......

    //16進位表示法hex 0 1 2 3 4 5 6 7 8 9 a b c d e f
    //0x......

    printf("%d\n",0b11111111);//2進位換算成一般數值
    printf("%d\n",0xff);      //16進位換算成一般數值

    printf("%c\n",(char)97);//97會先宣告成0x61 0x00 0x00 0x00;
    printf("%c\n",(char)0x61);//6*16+1=97，只有宣告0x61;

    return 0;
}
