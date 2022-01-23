#include<stdio.h>
main()
{int n,m,temp,a,b=0;
scanf("%d",&n);
m=n*n;
temp=m;
while(m!=0)
{a=m%10;
m=m/10;
b+=a;
}
if(b==n)
printf("Neon Number");
else
printf("Not Neon Number");
}