#include<stdio.h>
/*
09-01
有條件的重複執行 (while 述句)
*/
//while = 當
int main()
{
    int count = 0;
/*
    while (count < 3) {
        printf("%d\n",count);
    }//如果條件成立，會形成無限迴圈
*/
while (count < 3) {
        printf("%d\n",count);
        count += 1;//count = count + 1
    }
    return 0;
}