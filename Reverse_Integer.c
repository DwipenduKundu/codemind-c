#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,temp,a,rem=0;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        rem=rem*10+a;
    }
    printf("%d",rem);
    return 0;
}