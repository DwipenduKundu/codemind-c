#include<stdio.h>
main()
{int a,x,y,z;
scanf("%d",&a);
if((a>=-231)&&(a<231))
{x=a%10;
y=(a/10)%10;
z=a/100;
if((a>=100)||(a<=-100))
printf("%d",((x*100)+(y*10)+z));
else if((a<=99)&&(a>=-99))
printf("%d",((x*10)+y));
}
else
printf("error");
}