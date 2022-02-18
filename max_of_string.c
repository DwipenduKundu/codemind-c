#include<stdio.h>
int main()
{
    char s[20];
    int i,count=0;
    scanf("%[^
]s",&s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[0]<s[i])
        s[0]=s[i];
    }
    printf("%c",s[0]);
    return 0;
}