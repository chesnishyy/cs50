#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <math.h>

int main(void) 
{
    float f;
    
    do
    {
        printf("O hai! How much change is owed?\n");
        
        f = GetFloat();
    }
    while(f<0);
    
    float z = ((f+0.005)*100)/100;
    int n = z*100;
    //printf("%i\n", n);
    
    
    int k = n/25;
    int k1 = n%25;
     //printf("Posle del na 25:%i\n", k1);
    
    int l = k1/10;
    int l1 = k1%10;
     //printf("Posle del na 10:%i\n", l1);
    
    int r = l1/5;
    int r1 = l1%5;
   //printf("Posle del na 5:%i\n", r1);

    
     printf("%i\n", k+l+r+r1);
     
     return 0;
 
   
}

