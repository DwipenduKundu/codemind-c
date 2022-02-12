#include<stdio.h>
int main()
{
    int n,temp,a,i,b=0;
    scanf("%d",&n);
    temp=n;
    for(i=1;n!=0;i++)
    {
        a=n%10;
        b+=a;
        n/=10;
    }
if(temp%b==0)
    printf("True");
else
    printf("False");
return 0;
}