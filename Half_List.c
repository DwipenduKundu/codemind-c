#include<stdio.h>
int main()
{
    int i,m,n[20];
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=m;i>(m/2);i--)
    {
        printf("%d ",n[i-1]);
    }
    for(i=0;i<(m/2);i++)
    {
        printf("%d ",n[i]);
    }
    return 0;
}
