#include<stdio.h>
int main()
{
    int a,i,arr[1000],sum=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<a;i++)
    {
        if(i%2==1)
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}