#include <stdio.h>
#include<string.h>
void reverse(char str[]);

int main()
{
    int i,n;
    printf("enter the size:");
    scanf("%d",&n);
    char str[n];
    printf("enter the name:");
    scanf("%s",str);
    reverse(str);
}
void reverse(char str[])
{
    int i,j;
    for(i=0;str[i]!='\0';i++)
    {
    }
        printf("Reverse of an string:");
    for(j=i-1;j>=0;j--)
    {
        printf("%c\t",str[j]);
    }
    printf("\n");

    return;
}

