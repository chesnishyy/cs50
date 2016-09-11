#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        printf("Enter a non-negative integer < 24:");
        n = GetInt();    
    }
    while(n < 0 || n > 23);
    
    
    for (int i= 1; i <= n; i++)
    {
        for(int j = 0; j < n-i; j++)
        {
            printf(" ");
        }
        
        for(int j = 1; j <= i+1; j++)
        {
            printf("#");    
        }
        
        printf("\n");
    }
    return 0;
}