#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,temp,a,count=0,prod=1;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        count+=a;
        prod*=a;
    }
    if(count==prod)
    printf("Spy Number");
    else
    printf("Not Spy Number");
    return 0;
}