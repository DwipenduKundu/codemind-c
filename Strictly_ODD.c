#include<stdio.h>
int main()
{
    int a,i,arr[1000],flag=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<a;i++)
    {
        if(arr[i]%2!=0&&i%2!=0)
        flag=1;
        else if(i%2==0&&arr[i]%2!=0)
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