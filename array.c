#include <stdio.h>
#define N 20

int main()
{
    int i=0;
    //char name[5]={'k','u','m','a','r'};//differnet types of declerations
    //char name[5]={'k','u','m','a','r'};
    char name[5];
    name[0]='k';
    name[1]='u';
    name[2]='m';
    name[3]='a';
    name[4]='r';
    //char name[5];
    printf("enter the char:");
    scanf("%c",&name[i]);
    /*for(i=0;i<5;i++)
    {
        scanf("%c",&name[i]);   
    }*/
    int j=0;
    while(j<5)//print the values 
    {
        printf("values of an array elemenets:name[%d] %c\n",j,name[j]);
        j++;
    }
    printf("Base Addres of an char array:%p\n",name);//print the base addres of char array
    printf("Address of all array elements:%p\n",name+0);//print address of all elements without using loops
    printf("Address of all array elements:%p\n",name+1);
    printf("Address of all array elements:%p\n",name+2);
    printf("Address of all array elements:%p\n",name+3);
    printf("Address of all array elements:%p\n",name+4);


    return 0;
}

