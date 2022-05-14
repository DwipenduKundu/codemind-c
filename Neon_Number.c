#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,temp,a,b,count=0;
    scanf("%d",&n);
    temp=b=n*n;
    while(b!=0)
    {
        a=b%10;
        b=b/10;
        count+=a;
    }
    if(n==count)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}