#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number;
    int output[8];

    for(int i=0; i<8; i++)
        output[i] = 0;

    scanf("%d",&number);

    int negative=0;
    if(number<0)
    {
        negative = 1;
        number = number * (-1);
    }

    int digit = 6;
    int base = 64;
    for(int i=digit; i>=0; i--)
    {
        if(number>=base)
        {
            output[i] = 1;
            number = number - base;
        }
        base = base / 2;
    }

    if(negative == 1)
    {
        for(int i=0; i<8; i++)
        {
            if(output[i] == 1)
                output[i] = 0;
            else
                output[i] = 1;
        }
        
        for(int i=0; i<8; i++)
        {
            if(output[i] == 0)
            {
                output[i] = 1;
                break;
            }
            output[i] = 0;
        }
    }

    for(int i=7; i>=0; i--)
        printf("%d",output[i]);
    printf("\n");

}