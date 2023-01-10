#include <stdio.h>
#include <stdlib.h>

int main()
{
    int line;

    scanf("%d",&line);
/*
    for(int i=1; i<=line; i++)
    {
        char symbol;
        int a,b;
        printf("/////\n");
        scanf("%c %d %d",&symbol,&a,&b);
        printf("%c %d %d\n",symbol,a,b);
    }
*/
    for(int i=1; i<=line; i++)
    {
        char symbol;
        int a, b, c, d;
        int x, y;
        
        scanf(" %c %d %d %d %d",&symbol,&a,&b,&c,&d);

        if(symbol == 43)
        {
            x = a+c;
            y = b+d;
        }
        else if(symbol == 45)
        {
            x = a-c;
            y = b-d;
        }
        else
        {
            x = a*c - b*d;
            y = a*d + b*c;
        }

        printf("%d %d\n",x,y);
    }
}