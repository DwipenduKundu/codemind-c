#include<stdio.h>
int main()
{
    int n,i,a[100],flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(i%2!=0&&a[i]%2!=0)
        flag=1;
        else if(i%2==0&&a[i]%2!=0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    printf("True");
    else
    printf("False");
    return 0;
}