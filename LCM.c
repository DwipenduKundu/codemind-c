#include <stdio.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    if(a>b)
    i=a;
    else if(b>a)
    i=b;
    while(1)
    {
        if(i%a==0&&i%b==0)
        {
            printf("%d",i);
            break;
        }
        i++;
    }
    return 0;
}