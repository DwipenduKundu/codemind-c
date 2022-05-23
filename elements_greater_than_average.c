#include<stdio.h>
int main()
{
    int i,a,arr[100],sum=0,count=0;
    float avg;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<a;i++)
    sum=sum+arr[i];
    avg=sum/a;
    for(i=0;i<a;i++)
    {
        if(arr[i]>=avg)
        count++;
    }
    printf("%d",count);
    return 0;
}