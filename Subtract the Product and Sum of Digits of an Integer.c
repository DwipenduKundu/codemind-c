#include<stdio.h>
main()
{int n,a,b,c,d;
scanf("%d",&n);
a=n%10;
b=(n/10)%10;
c=((n/10)/10)%10;
d=n/1000;
if((n>=1000)&&(n<=9999))
printf("%d",(a*b*c*d)-(a+b+c+d));
else if((n>=100)&&(n<=999))
printf("%d",(a*b*c)-(a+b+c));
else if((n>=10)&&(n<=99))
printf("%d",(a*b)-(a+b));
else if((n>=1)&&(n<=9))
printf("%d",(a)-(a));
else
printf("error");
}