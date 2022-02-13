#include<stdio.h>
int main()
{
    int i,n,m,a,rev=0,j;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {rev=0;
	j=i;
	while(j!=0)
    {
        a=j%10;
        rev=(rev*10)+a;
        j/=10;
    }
    if(rev==i)
    printf("%d ",i);
    }
    return 0;
}