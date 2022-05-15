#include<stdio.h>
int main()
{
    int i,n,a,arr[100],b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0&&arr[i-1]%2==0&&arr[i+1]%2==0&&arr[i-1]!=NULL&&arr[i+1]!=NULL)
        b++;
    }
    printf("%d",b);
    return 0;
}