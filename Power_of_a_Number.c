#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,ans;
    scanf("%d%d%d",&x,&y,&m);
    ans=pow(x,y);
    printf("%d",ans%m);
    return 0;
}