#include<stdio.h>
int main()
{char str[20];
int i,count=0,a=0;
scanf("%[^
]s",str);
for(i=0;str[i]!=NULL;i++)
{
    count++;
}
for(i=0;i<count;i++)
{
    if(str[i]>='0'&&str[i]<='9')
    {a+=(str[i]-'0');
	}
}
printf("%d",a);
return 0;
}