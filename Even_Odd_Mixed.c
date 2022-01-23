#include<stdio.h>
main()
{int n,a,b=0,c=0;
scanf("%d",&n);
while(n!=0)
{a=n%10;
n=n/10;
if(a%2==0)
b+=1;
else
c+=1;
}
if(c==0)
printf("Even");
else if(b==0)
printf("Odd");
else
printf("Mixed");
}