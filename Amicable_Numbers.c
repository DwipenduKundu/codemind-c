#include<stdio.h>
int main()
{
    int n,m,i,sum=0,sum1=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {sum+=i;
		}
    }
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {sum1+=i;
		}
    }
	if(n==sum1&&m==sum)
	printf("Amicable");
    else
	printf("Not Amicable");
    return 0;
}