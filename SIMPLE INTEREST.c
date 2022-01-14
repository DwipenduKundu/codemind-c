#include<stdio.h>
main()
{int simple_interest,principle_amount,time,rate_of_interest;
scanf("%d%d%d",&principle_amount,&time,&rate_of_interest);
simple_interest=(principle_amount*time*rate_of_interest)/100;
printf("%d",simple_interest);
}