#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,temp,i,a,b,c,d,count=0;
    scanf("%d",&n);
    scanf("%d",&m);
    temp=n;
    for(i=1;n!=0;i++)
    {n=n/10;
    count++;
	}
    b=pow(10,m);
	d=pow(10,(count-m));
    a=temp%b;
    c=temp/d;
    if(a>=c)
    printf("%d",a-c);
    else if(c>=a)
    printf("%d",c-a);
    return 0;
}