#include<stdio.h>
int main()
{
    int n,i,count=0;
    char j;
    scanf("%d",&n);
    for(j='A';j<='Z';j++)
    {
        for(i=1;i<=n;i++)
        {
            printf("%c ",j);
        }
        printf("
");
        count++;
        if(count==n)
        break;
    }
    return 0;
}