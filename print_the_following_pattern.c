#include<stdio.h>
main()
{int n,i,j;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=n;j>0;j--)
{printf("%d ",j);
}
printf("
");
}
}