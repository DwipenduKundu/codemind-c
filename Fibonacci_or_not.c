#include<stdio.h>
int main()
{
    int n,a,b,c,f=0,i=0;
    scanf("%d",&n);
    a=0;
    b=1;
    while(i<=n)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n)
        {
            f=1;
            break;
        }
        else
        i++;
    }
    if(f==1)
    printf("True");
    else
    printf("False");
    return 0;
}