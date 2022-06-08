#include<stdio.h>
int main()
{
    int i,n,a[1000],count1=0,count2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        count1++;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        count2++;
    }
    printf("%d %d",count1,count2);
    return 0;
}