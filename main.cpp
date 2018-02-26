//æ≈∂» √∞≈›≈≈–Ú2.2
#include <stdio.h>
int a [100];
void bubblesort(int l)
{
    int i,j;
    int tmp;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l-i-1;j++)
            if(a[j]>a[j+1])
            {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
    }
}

int main()
{

    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    bubblesort(n);

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
