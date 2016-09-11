#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main (int argc, string argv[])
{
    if ((argc != 2))
    {
        printf("Wrong number of arguments. Please try again.\n");
        return 1;
    }
    else 
    {
        string k = argv[1];
        for (int i = 0; i < strlen(k); i++)
        {
            if (!isalpha(k[i]))
            {
                printf("Key must be alphabetic chars only.\n");
                return 1;
            }
        }
        
        int key[strlen(k)];
        
        for (int i = 0; i < strlen(k); i++)
        {
           if (isupper(k[i]))
           {
               key[i] = (int)k[i] - 65;
           }
           else 
           {
               key[i] = (int)k[i] - 97;
           }
           //printf("%i", key[i]);
        }
        
        string p = GetString();
        
        //int count = strlen(p) / strlen(k);
        int key1[strlen(p)+strlen(k)];
        if (strlen(p) > strlen(k)) 
        {
            for (int i = 0, j = 0; i < strlen(p); i++)
            {
                if (!isalpha(p[i]))
                {
                    key1[i] = p[i];
                }
                else
                {
                if (isupper(p[i]))
                {
                    if ((int)p[i] + key[j % strlen(k)] > 90) 
                    {
                        key1[i] = (int)p[i] + key[j % strlen(k)] - 90 + 65 -1;
                        j++;
                    }
                    else
                    {
                        key1[i] = (int)p[i] + key[j % strlen(k)];
                        j++;
                    }
                }
                else
                {
                    if ((int)p[i] + key[j % strlen(k)] > 122) 
                    {
                        key1[i] = (int)p[i] + key[j % strlen(k)] - 122 + 97 -1;
                        j++;
                    }
                    else
                    {
                        key1[i] = (int)p[i] + key[j % strlen(k)];
                        j++;
                    }
                }
                }
                
                printf("%c", key1[i]);
                
            }  
        }
        else
        {
            for (int i = 0; i < strlen(p); i++)
            {
                key1[i] = (int)p[i] + key[i];
                printf("%c", key1[i]);
                
            }
        }
        printf("\n");        
        return 0;
    }
    
}