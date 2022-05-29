#include<stdio.h>
int main()
{
    int n,a[1000],i,j,count=0,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
               count++; 
            }
        }
        if(count==0)
        {
            printf("%d ",a[i]);
            flag=1;
        }
    }
    if(flag==0)
    printf("-1");
    return 0;
}