#include<stdio.h>
int main()
{
    int m,n,temp,i,j,a,b,c=0,d;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
            a=n%10;
            b=1;
            for(j=1;j<=a;j++)
            {
        		b*=j;
    		}
    		c+=b;
    		n/=10;
    }
    if(c==temp)
    printf("The number %d is a strong number",temp);
    else
    printf("The number %d is not a strong number",temp);
    return 0;
}