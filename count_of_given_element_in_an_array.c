#include<stdio.h>
int main()
{
    int i,n,a,arr[100],flag=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==arr[i])
        flag++;
    }
    printf("%d",flag);
    return 0;
}