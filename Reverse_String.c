#include<stdio.h>
#include<string.h>
int main()
{char str[20],str1[20];
int i,count=0;
scanf("%[^
]s",str);
for(i=0;str[i]!=NULL;i++)
{
    count++;
}
for(i=0;i<count;i++)
{
    str1[i]=str[count-i-1];
}
str1[i]=NULL;
printf("%s",str1);
return 0;
}