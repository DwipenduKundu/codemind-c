#include<stdio.h>
int main()
{
    char s[20];
    int i,count=0;
    scanf("%[^\n]s", s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        count++;
    }
    if(count>0)
    printf("Contains %d digit",count);
    else 
    printf("Doesn't contain digit");
    return 0;
}
