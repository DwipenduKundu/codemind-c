#include<stdio.h>
int main()
{
    int i,n,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        printf("%d
",a+b);
    }
    return 0;
}