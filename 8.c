#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int prime = 1;

    scanf("%d",&number);

    for(int i=number-1; i>1; i--)
    {
        if( number%i == 0 )
        {
            prime = 0;
            break;
        }
    }

    if(prime == 0)
        printf("NO\n");
    else
        printf("YES\n");
}