#include <stdio.h>

//變數記憶體空間與sizeof
//利用sizeof查看有幾個bytes.

int main()
{
    int value = 0;
    int result = 0;
    char hello[] = "hello!";
    result = sizeof(value);
    printf("%d",result);

    result = sizeof(hello);


    printf("\n%d",result);
    return 0;
}
/*
byte,bytes -> 位元組
bi,bits -> 位元
1位元組 = 8位元
64bits => 8bytes
32bits => 4bytes
*/
