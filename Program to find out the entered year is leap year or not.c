#include<stdio.h>
int main()
{long int n;
scanf("%ld",&n);
if(n%4==0)
    {if(n%100==0)
        {if(n%400==0)
        printf("True");
        else
        printf("False");
        }
    else
        printf("True");
    }
else if(n%4!=0)
    printf("False");
else 
    printf("Wrong Input");
return 0;
}