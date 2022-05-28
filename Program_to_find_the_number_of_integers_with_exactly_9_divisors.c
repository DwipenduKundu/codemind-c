#include<stdio.h>
int main()
{
    int n,i,j,count=0,count1=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==9)
        {
            printf("%d ",i);
            count1++;
        }
    }
    printf("
Total=%d",count1);
    return 0;
}