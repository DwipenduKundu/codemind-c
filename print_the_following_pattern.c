#include<stdio.h>
int main()
{
    int n,c,i,j;
    scanf("%d",&n);
    c=64+n;
    for(i=n;i>0;i--)
        {
            for(j=1;j<=i;j++)
            {
               printf("%c ",c);
            }
            c--;
            printf("
");
        }
        return 0;
}