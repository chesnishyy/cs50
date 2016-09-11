#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
   if (argc != 2)
   {
       printf("Usage:./caesar <key>");
       return 1;
   }
   if (atoi(argv[1]) < 1) 
   {
       printf("Key must be a non-negative integer.");
       return 1;
   }
   int k = atoi(argv[1])%26;
   
   
   string p = GetString();
   
   for (int i = 0, n = strlen(p); i < n; i++)
    {
        if (isalpha(p[i])) 
        {
            if (isupper(p[i]))
            {
                if (p[i] + k > 90)
                {
                    printf("%c", p[i] + k - 90 + 65 - 1);
                }
                else 
                {
                    printf("%c", p[i] + k);
                }
                
            }
            else
            {
                if (p[i] + k > 122 )
                {
                    printf("%c", p[i] + k - 122 + 97 - 1);
                }
                else 
                {
                     printf("%c", p[i] + k);
                }
            }
        }
        else 
        {
            printf("%c", p[i]);
        }
        
    }
    printf("\n");
   
    return 0;
}