#include<stdio.h>
int main()
{int i=0,n,a,b=0;
scanf("%d",&n);
if(n>=0)
{while(i>=0)
{a=n%10;
n=n/10;
i++;
if(b<a)
b=a;
else if(n==0)
break;}
printf("%d",b);
return 0;
}
}