#include <stdio.h>
#define N 10

int main()
{
    int i;
    char name[N]={'I','j','k','A','h','E','r','o','x','U'};
    //char name[N];
    //printf("enter the vowels:");
    //scanf("%c",&name[i]);
    for(i=0;i<N;i++)
    {
       // scanf("%c",&name[i]);
    if(name[i]=='a'||name[i]=='A'||name[i]=='e'||name[i]=='E'||name[i]=='i'||name[i]=='I'||name[i]=='o'||name[i]=='O'|name[i]=='u'|name[i]=='U')
    {
        printf("Given array of vowel elements:index[%d] %c\n",i,name[i]);
        printf("Given array of vowel elements address:%p\n",&name[i]);
    }
    }

    return 0;
}

