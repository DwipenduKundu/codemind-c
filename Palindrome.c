#include<stdio.h>
int main()
{int i=0,n,a,b=0,c;
scanf("%d",&n);
c=n;
if(n>=0)
{while(i>=0)
{a=n%10;
n=n/10;
b=b*10+a;
i++;
if(n==0)
break;}
}
if(b==c)
printf("True");
else
printf("False");
}