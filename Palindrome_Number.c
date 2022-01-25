#include<stdio.h>
int main()
{int x,n,a,b,temp,i;
scanf("%d",&x);
for(i=1;i<=x;i++)
{   b=0;
    scanf("%d",&n);
    temp=n;
    if(n>=0)
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        b=b*10+a;
    }
    if(b==temp)
        printf("True
");
    else
        printf("False
");
}
}