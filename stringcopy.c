#include<stdio.h>
#include<string.h>
char stringcopy(char s1[],char s2[]);

int main()
{
    char s1[50];
    char s2[50]="kumar";
    stringcopy(s1,s2);
}
char stringcopy(char s1[],char s2[])
{
    int i;
    for(i=0;s2[i]!='\0';i++)
    {
        s1[i]=s2[i];
    }
    s1[i]='\0';
    printf("copied string is :%s",s1);
}

