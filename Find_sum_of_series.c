#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,j;
    float s=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s+=1.00/i;
    }
    printf("%0.2f",s);
    return 0;
}