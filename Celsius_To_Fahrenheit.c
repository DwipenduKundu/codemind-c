#include<stdio.h>
int main()
{
    float Fahrenheit,Celsius;
    scanf("%f",&Celsius);
    Fahrenheit=(Celsius*9/5)+32;
    printf("%.2f",Fahrenheit);
    return 0;
}