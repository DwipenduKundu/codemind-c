#include<stdio.h>
main()
{int sides,diagonals;
scanf("%d",&sides);
diagonals=(sides*(sides-3))/2;
printf("%d",diagonals);
}