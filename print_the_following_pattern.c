#include<stdio.h>
int main()
{
	int i,j,k,n,l=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j>n-i-2)
			printf("%d",l);
			else
			printf(" ");
		}
		for(k=0;k<i;k++)
		{
			printf("%d",l);
		}
		printf("
");
		l++;
	}
	return 0;
}