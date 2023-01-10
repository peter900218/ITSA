#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[100];
    scanf("%s",input);
    int yes = 1;
    
    int size=0;
    for(int i=0;i<100;i++)
    {
        if(input[i]=='\0')
            break;
        size++;
    }

    for(int i=0; i<size/2;i++)
    {
        if(input[i]!=input[size-1-i])
        {
            yes = 0;
            break;
        }
    }

    if(yes == 0)
        printf("NO\n");
    else
        printf("YES\n");

    
}