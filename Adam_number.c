#include<stdio.h>
int main ()
{
    int n,s,rem1,sum1=0,j,rem2,sum2=0;
    scanf("%d",&n);
    s=n*n;
    while(n>0)
    {
        rem1=n%10;
        sum1=sum1*10+rem1;
        n=n/10;
    }
    j=sum1*sum1;
    while(j>0)
    {
        rem2=j%10;
        sum2=sum2*10+rem2;
        j=j/10;
    }
    if(sum2==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}