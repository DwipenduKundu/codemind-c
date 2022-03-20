#include<stdio.h>
int main()
{
    int a,b=0,n;
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        n=n/10;
        b=b+a;
        if(b>9&&n==0)
        {
            n=b;
            b=0;
        }
    }
    printf("%d",b);
    return 0;
}