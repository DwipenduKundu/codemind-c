#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
    	k=n-i+1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("
");
    }  
    return 0;
}