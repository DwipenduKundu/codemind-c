#include<stdio.h>
int main()
{
    int l,b,w,c,a,area;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(l>(w*2)&&b>(w*2))
    {
        area=((b-(w*2))*(l-(w*2)));
        if(area>=0)
        printf("%d",((l*b)-area)*c);
        else
        printf("Impossible");
    }
    else
    {
       printf("Impossible");
    }
}