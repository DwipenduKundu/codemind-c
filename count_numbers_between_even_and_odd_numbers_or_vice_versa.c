#include<stdio.h>
int main()
{
    int n,arr[100],i,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if((arr[i-1]%2!=0&&arr[i+1]%2==0&&arr[i-1]!=NULL&&arr[i+1]!=NULL)||(arr[i-1]%2==0&&arr[i+1]%2!=0&&arr[i-1]!=NULL&&arr[i+1]!=NULL))
        count++;
    }
    printf("%d",count);
    return 0;
}