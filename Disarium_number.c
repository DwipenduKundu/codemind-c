#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp,i,count=0,a,b=0;
    scanf("%d",&n);
    temp=n;
    for(i=1;n!=0;i++)
    {
        n/=10;
        count++;
    }
    n=temp;
    for(i=1;n!=0;i++)
    {
        a=n%10;
        b=(pow(a,(count-i+1)))+b;
        n/=10;
    }
    if(b==temp)
    printf("True");
    else
    printf("False");
    return 0;
}