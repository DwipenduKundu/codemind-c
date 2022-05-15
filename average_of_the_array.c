#include<stdio.h>
int main()
{
    int i,n,a,arr[100];
    float sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("%0.2f",sum/n);
    return 0;
}