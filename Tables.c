#include<stdio.h>
int main()
{int i,j,n,m,a;
scanf("%d",&n);
scanf("%d",&m);
for(i=1;i<=m;i=i+2)
{a=n*(i);
printf("%d x %d = %d",n,i,a);
printf("
");
}
}