#include <stdio.h>

#define MAX_SIZE 100 
void removeAll(char * string, const char toRemove, int index)
{
    int i, j;

    i = index + 1;

    while(string[i] != '\0')
    {
        
        if(string[i] == toRemove)
        {
            
            j = i;
            while(string[j] != '\0')
            {
                string[j] = string[j + 1];
                j++;
            }
        }

        i++;
    }
}




void removeDuplicates(char * string)
{
    int i = 0;

    while(string[i] != '\0')
    {
        
        removeAll(string, string[i], i);
        i++;
    }
}
void removeDuplicates(char * string);
void removeAll(char * string, const char toRemove, int index);

int main()
{
    char string[MAX_SIZE];

    
    printf("\nEnter any string: ");
    gets(string);

    printf("\nString before removing duplicates: %s\n", string);

    removeDuplicates(string);

    printf("\nString after removing duplicates: %s\n", string);

    return 0;
}





