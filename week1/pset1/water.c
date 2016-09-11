#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int t;
    do 
    {
        printf("minutes:");
        t = GetInt();
    }
    while(t < 1);
    printf("bottles: %i\n", t*12);
}