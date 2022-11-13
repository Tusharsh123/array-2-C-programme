#include <stdio.h>
#include <string.h>
void Min_Occurring(char *str)
{
	int i;
  	int min = 0;
  	
  	int freq[256] = {0}; 
  	 	 	
  	for(i = 0; str[i] != '\0'; i++)
  	{
  		freq[str[i]]++;
	}
  		
  	for(i = 0; i < 256; i++)
  	{
		if(freq[i] != 0)
		{
			if(freq[min] == 0 || freq[i] < freq[min])
			{
				min = i;
			}
		}
	}
	printf("\n Character '%c' appears Minimum of %d Times in a Given String :  %s ", min, freq[min], str);
}
 
 

void Min_Occurring(char *str);
 
int main()
{
  	char str[100];
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	
  	
  	Min_Occurring(str);
	
  	return 0;
}

