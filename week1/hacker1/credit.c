#include <stdio.h>
#include <cs50.h>
#include <math.h>


int counter(long long n)
{
    int k = 0;
    if (n/10==0)
    {
        return 1;
    }
    else
    {
        while (n>0)
        {
            n=n/10;
            k=k+1;
        }
        return k;
    }
}


int main(void)
{
    printf("Number: ");
    
    long long n = GetLongLong();
    
   
    int l = counter(n);
    
    int s[l-1];
    
    //printf("l=%i\n", l);
    
    for(int i = 0; i < l ; i++)
    {
        s[i] = n % 10;
        n = n/10;
        //printf("s[%i]=%i\n", i, s[i]);
    }
    
    int g[l/2];
    
    
    for(int i = 0; i < l/2; i++)
    {
        int j = i;
        g[j] = s[1 + 2 * i] * 2;
       // printf("g[%i]=%i\n", j, g[j]);

    }
    //printf("g[%i]=%i\n", 0, g[0]);
     
     int sum = 0;
    for (int i = 0; i < l/2; i++)
    {
          sum = sum + (g[i] % 10) + (g[i]/10);
    }
    //printf("sum=%i\n", sum);
     
     
     int c[(l+1)/2];
     
     for(int i = 0; i < (l+1)/2 ; i++)
    {
        int f = i;
        c[f] = s[2 * i];
        //printf("c[%i]=%i\n", f, c[f]);
    }
    
    int sum_1=0;
    for (int i = 0; i < (l+1)/2;  i++)
    {
        sum_1 = sum_1 + c[i];
    }
    //printf("sum_1=%i", sum_1);
    
    
    if ((sum + sum_1) % 10 == 0)
    {
        
        if ( l == 15 && ((s[l-1] == 3 && s[l-2]==7) || (s[l-1] == 3 && s[l-2] == 4)))
        {
            printf("AMEX\n");    
        }
        else 
        {
            if (l == 16 && s[l-1]==5)
            {
                if (s[l-2]==1 || s[l-2]==2 || s[l-2]==3 || s[l-2]==4 || s[l-2]==5)
                {
                    printf("MASTERCARD\n");    
                }
            }
        
         if ((l == 13 || l == 16) && s[l-1]==4)
            {
                printf("VISA\n");
            }
        }
        
    }
    else
    {
        printf("INVALID\n");
    }
    
    return 0;
}