#include<stdio.h>
int main()
{int i=0,n,a,b=0,c=1;
scanf("%d",&n);
if(n>=0)
{while(i>=0)
{a=n%10;
n=n/10;
printf("%d",a);
i++;
if(n==0)
break;}
return 0;
}
}