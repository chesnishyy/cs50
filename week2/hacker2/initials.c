#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main (void)
{
    string name = GetString();
    //printf("%s\n", name);
    if (name[0] != ' ')
    {
        printf("%c", toupper(name[0]));
    }
    for (int i = 0; i < strlen(name); i++)
    {
        if ((name[i-1] == ' ') && (name[i] != ' ')) 
        {
            printf("%c", toupper(name[i]));
        }
        
    }
    printf("\n");
    return 0;
}