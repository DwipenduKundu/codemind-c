#include<stdio.h>
int main()
{long int n;
scanf("%ld",&n);
if(n%2==0)
printf("Even");
else if(n%2!=0)
printf("Odd");
else 
printf("Wrong Input");
return 0;
}