#include <stdio.h>
#include<string.h>
int strlength(char str[]);

int main()
{
    char str[20];
    int len;
    printf("enter a name:");
    scanf("%s",str);
    len=strlength(str);
    printf("strlength:%d",len);
    return 0;
}
int strlength(char str[])
{
    int i,len=0;
    for(i=0;str[i]!='\0';i++)
    {
       len++;
    }
    return len;
}

