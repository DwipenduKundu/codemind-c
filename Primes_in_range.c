#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,sum=0;
    int ip;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        ip=1;
        if(i==1)
        {
            ip=0;
        }
        for(j=2;j<=(int)(pow(i,0.5));j++)
        {
            if(i%j==0)
            {
                ip=0;
                break;
            }
        }
        if(ip==1)
        sum++;
    }
    printf("%d",sum);
    return 0;
}