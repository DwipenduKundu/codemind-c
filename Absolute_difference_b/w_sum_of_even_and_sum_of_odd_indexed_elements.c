#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,i,arr[1000],sum1=0,sum2=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<a;i++)
    {
        if(i%2==0)
        sum1=sum1+arr[i];
        if(i%2==1)
        sum2=sum2+arr[i];
    }
    a=abs(sum2-sum1);
    printf("%d",a);
    return 0;
}