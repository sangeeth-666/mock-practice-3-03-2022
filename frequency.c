#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100]="hello";
  	int i;
  	int freq[256] = {0}; 
  	//printf("\n Please Enter any String :  ");
  	//scanf("%s",str);
  	for(i = 0; str[i] != '\0'; i++)//check the condition string is null
  	{
  		freq[str[i]]++;//freq[str[i]] replace to freq[str[0]]=freq['h']=freq[104]ascii value 104 location has 'h' so h will replace to 1 time
	}
	for(i = 0; i < 256; i++)
  	{
		if(freq[i] != 0)//it checks the char repeat condtion flase
		{
			printf("Character '%c' Occurs %d Times \n", i, freq[i]);
		}
	}
	
  	return 0;
}
