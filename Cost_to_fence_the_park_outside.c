#include<stdio.h>
main()
{
    int l,b,w,c,a;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a=((b+(w*2))*(l+(w*2)))-(l*b);
    printf("%d",a*c);
}