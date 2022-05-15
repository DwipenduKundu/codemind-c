#include<stdio.h>
int main()
{
    int i,n,a,rem=0;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        rem=rem*10+a;
    }
    printf("%d",rem);
    return 0;
}