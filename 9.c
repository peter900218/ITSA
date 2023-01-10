#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int sum=0;

    scanf("%d",&input);

    for(int i=3; i<=input; i++)
    {
        if(i%3==0)
        {
            sum = sum + i;
        }
    }

    printf("%d\n",sum);
}