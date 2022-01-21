#include<stdio.h>
#include<math.h>
main()
{long int n,b;
float a;
scanf("%ld",&n);
a=sqrt(n);
b=(int)a;
if(a==b)
printf("True");
else
printf("False");
}