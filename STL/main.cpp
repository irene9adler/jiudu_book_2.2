//�Ŷ��� �ڶ��� �������� ��2.2 STL����
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
