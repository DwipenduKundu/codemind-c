#include<stdio.h>
int main()
{
    int n,i,m,j,count=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        if(i!=1)
        {
            count=0;
            for(j=1;j<i;j++)
            {
                if(i%j==0)
                count++;
            }
            if(count<=1)
            printf("%d\n",i);
        }
    }
    return 0;
}
