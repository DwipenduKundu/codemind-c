#include<stdio.h>
int main()
{
    int x,n,temp,b,a[1000],i,j,flag,count=0;
    scanf("%d",&x);
    temp=x;
    for(i=0;x!=0;i++)
    {
        b=x%10;
        x=x/10;
        n++;
        a[i]=b;
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            count++;
        }
        if(count>1)
        {flag=1;break;}
        else
        flag=0;
    }
    if(flag==0)
    printf("Unique Number");
    else
    printf("Not Unique Number");
    return 0;
}