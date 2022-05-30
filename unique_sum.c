#include<stdio.h>
int main()
{
    int n,a[1000],i,j,k,count=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j+1;k<n;k++)
                a[k-1]=a[k];
                j--;
                n--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
    return 0;
}