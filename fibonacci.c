#include<stdio.h>
main()
{int n,i,a=0,b=1,c;
scanf("%d",&n);
if(n==1)
printf("%d ",a);
else if(n==2)
{printf("%d ",a);
printf("%d ",b);
}
else if(n>=2)
{printf("%d ",a);
printf("%d ",b);
for(i=1;i<=(n-2);i++)
{c=a+b;
printf("%d ",c);
a=b;
b=c;
}
}
}