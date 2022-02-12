#include<stdio.h>
int main()
{ int n,a,i,j,b=0;
scanf("%d",&n);
for(i=1;n!=1&&n!=4;i++)
{	b=0;
	for(j=1;n!=0;j++)
	{
		a=n%10;
		b+=(a*a);
		n/=10;
	}
	n=b;
}
if(b==1)
printf("True");
else
printf("False");
return 0;
}