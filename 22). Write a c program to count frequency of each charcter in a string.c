#include <stdio.h>
#include <string.h>
#define maxsize 100 

void removeFirst(char * str, const char toRemove)
{
    int x = 0;
    int len = strlen(str);


    while(x<len && str[x]!=toRemove)
        x++;

    
    while(x < len)
    {
        str[x] = str[x+1];
        x++;
    }
}

void removeFirst(char *, const char);

int main()
{
    char str[maxsize];
    char toRemove;

    printf("Enter any string: ");
    gets(str);

    printf("Enter character to remove from string: ");
    toRemove = getchar();

    removeFirst(str, toRemove);

    printf("String after removing first '%c' : %s", toRemove, str);

    return 0;
}

