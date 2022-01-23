#include<stdio.h>
main()
{int n,i,a,b=0,c=1;
scanf("%d",&n);
while(n!=0)
{a=n%10;
n=n/10;
b+=a;
c*=a;
}
if(b==c)
printf("Spy Number");
else
printf("Not Spy Number");
}