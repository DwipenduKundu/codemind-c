#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,temp,count=0,arr[100],i;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        count++;
    }
    n=temp;
    for(i=0;i<n;i++)
    {
        a=n%10;
        n=n/10;
        arr[i]=a;
    }
    n=temp;
    for(i=0;i<n;i++)
    {
        a=n%10;
        n=n/10;
        if(arr[0]<=arr[i])
        arr[0]=arr[i];
    }
    printf("%d",arr[0]);
    return 0;
}