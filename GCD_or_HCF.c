#include<stdio.h>
int main()
{
    int i,a,b,d;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        d=i;
    }
    printf("%d",d);
    return 0;
}