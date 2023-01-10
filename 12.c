#include <stdio.h>
#include <stdlib.h>

int func(int n)
{
    if(n==0 || n==1)
    {
        return n+1;
    }
    else
    {
        return func(n-1) + func(n/2);
    }
}

int main()
{
    int input;

    scanf("%d",&input);
    printf("%d\n",func(input));
}