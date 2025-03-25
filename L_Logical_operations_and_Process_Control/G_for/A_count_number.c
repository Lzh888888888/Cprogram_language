#include<stdio.h>
/*
10-01 10-02
計次型的重複執行(for 述句)、
數數字練習  (使用 for 述句)
*/
//for (初始式;條件式;迴圈式){程式片段}

int main()
{
    int count;
    //印出一到十
    for (count = 1; count <= 10; count++){
        printf("%d\n",count);
    }

    //印出m到n的數值
    int m,n;
    printf("Please enter the number M: ");
    scanf("%d",&m);
    printf("Please enter the number N: ");
    scanf("%d",&n);
    for (count = m;count <= n; count++){
        printf("%d\n",count);
    }
    
    return 0;
}