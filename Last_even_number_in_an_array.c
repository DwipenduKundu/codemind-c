#include<stdio.h>
int main()
{
    int i,n,a,arr[100],b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        b=arr[i];
    }
    printf("%d",b);
    return 0;
}