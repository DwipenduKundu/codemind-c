#include<stdio.h>
#include<math.h>
int main()
{int n,i,a,c;
float b;
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d",&a);
b=sqrt(a);
c=(int)b;
if(b==c)
{printf("True");
printf("
");
}
else
{printf("False");
printf("
");
}
}
}