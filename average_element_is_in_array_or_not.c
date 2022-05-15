#include<stdio.h>
int main()
{
    int i,n,a,arr[100],flag=0;
    int sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    for(i=0;i<n;i++)
    {
        if((sum/n)==arr[i])
        flag=1;
    }
    if(flag==1)
    printf("True");
    else
    printf("False");
    return 0;
}