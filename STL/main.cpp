//九度书 第二章 经典入门 例2.2 STL排序
#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int buf[100];
    while(scanf("%d",&n)!=EOF)
    {
        int i;
        for(i = 0;i < n;i++)
        {
            scanf("%d",&buf[i]);
        }
        sort(buf,buf + n);
        for(i = 0;i < n;i++)
            printf("%d ",buf[i]);
        printf("\n");
    }
    return 0;
}
