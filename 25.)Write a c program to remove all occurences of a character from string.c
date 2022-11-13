#include <stdio.h>
#include <string.h>

void deletechar(char *s,char c)
{
	int i,k=0;
 
    
    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];

     	
     	if(s[i]==c)
     	{
		  k++;
		  i--;
	    }
    
    }
	   
}


int main()
{

    char s[1000],c;
  
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character: ");
    c=getchar();
    deletechar(s,c);

    printf("%s",s);

	return 0;
 
     
     
}