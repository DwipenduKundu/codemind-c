#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i,arr[1000],sum=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<a;i++)
    {
        if(arr[i]%2==0)
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}