#include<stdio.h>
#include<math.h>
main()
{float A,B,C,s,area;
scanf("%f%f%f",&A,&B,&C);
s=(A+B+C)/2;
area=sqrt(s*(s-A)*(s-B)*(s-C));
printf("%0.2f",area);
}