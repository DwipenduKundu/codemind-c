#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    scanf("%d",&n);
    if(n==1)
	printf("%d ",a);
    else if(n==2)
    printf("%d %d ",a,b);
    else if(n>=2)
	{	printf("%d %d ",a,b);
		for(i=2;i<n;i++)
    	{
			c=a+b;
        	printf("%d ",c);
        	a=b;
        	b=c;
    	}
	}
	return 0;
}